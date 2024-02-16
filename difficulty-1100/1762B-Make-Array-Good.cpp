#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    cout << n << '\n';
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;

        ll a = 1;
        while(a < x)
            a *= 2;

        cout << i << ' ' << a - x << '\n';
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
    Thursday, February 08, 2024 | 04:39:13 (UTC +06:00) Dhaka
*/