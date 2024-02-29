#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    if (n == 1)
        cout << 1 << '\n';
    else {
        ll ans = 1;
        for (int i = 1; i <= n; i++) {
            ans *= 2;
            if (ans * 2 > n)
                break;
        }
        cout << ans << '\n';
    }
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

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Thursday, February 29, 2024 | 20:35:14 (UTC +06:00) Dhaka
*/