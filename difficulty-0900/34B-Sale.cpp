#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n, m; cin >> n >> m;

    vector<int>v(n);
    for (int i = 0; i < n; i++) 
        cin >> v[i];

    sort(v.begin(), v.end());

    ll sum = 0;
    for (int i = 0; i < m; i++) {
        if (v[i] < 0)
            sum += v[i];
    }

    cout << abs(sum) << ed;
    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;

    // while(t--) {
        solve();
    // }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
