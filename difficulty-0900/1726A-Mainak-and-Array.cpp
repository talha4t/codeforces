#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);

    int mx = INT_MIN, mn = INT_MAX; 
    for (int i = 0; i < n; i++) {
        cin >> v[i];

        mx = max(mx, v[i]);
        mn = min(mn, v[i]);
    }

    if (n == 1)
        cout << 0 << ed;
    else {
        int ans = v[n - 1] - v[0];

        for (int i = 1; i < n; i++)
            ans = max(ans, v[i] - v[0]);
        for (int i = 0; i < n - 1; i++) 
            ans = max(ans, v[n - 1] - v[i]);
        for (int i = 1; i < n; i++)
            ans = max(ans, v[i - 1] - v[i]);

        cout << ans << ed;
        
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}

// *    author:  talha4t
//github.com/talha4t (Talha Mahmud)


