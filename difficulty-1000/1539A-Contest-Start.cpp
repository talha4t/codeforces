#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, x, k;
    cin >> n >> x >> k;

    int tot = k / x;
    if (tot > n)
        cout << (n - 1) * 1LL * (n) / 2 << '\n';
    else {
        ll ans = 1LL * tot * n;

        ans -= 1LL * tot * (tot + 1) / 2;

        cout << ans << '\n';
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

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Wednesday, November 08, 2023 | 11:05:22 (UTC +06:00) Dhaka
*/