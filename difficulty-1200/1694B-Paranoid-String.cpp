#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool solve() {
    
    int n; cin >> n;

    string s; cin >> s;

    ll res = n;
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1])
            res += i;
    }

    cout << res << ed;
    
    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
