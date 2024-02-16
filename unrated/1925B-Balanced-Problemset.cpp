#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int x, n; cin >> x >> n;

    ll ans = 0;
    if (x % n == 0)
        cout << x / n;
    else {
        ll div = x / n;
        ll tmp_n = n, tmp;
        for (int i = 1; i <= x; i++) {
            tmp_n--;
            tmp = x - tmp_n * div;
            
            if (tmp % div == 0) {
                ans = div;
                break;
            }
            else
                div--;
        }
        cout << ans;
    }

    cout << '\n';

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
    Saturday, January 27, 2024 | 20:58:41 (UTC +06:00) Dhaka
*/