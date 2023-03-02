#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    reverse(a.begin(), a.end());

    int ans = 0, invalid = 0;
    for (int i = 1; i < n; i++) {

        if (a[i - 1] == 0) {
            invalid = 1;
            break;
        }
        while(a[i] >= a[i - 1]) {
            a[i] /= 2;
            ans++;
        }
    }
    
    if (invalid)
        cout << -1  << ed;
    else 
        cout << ans << ed;
    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
