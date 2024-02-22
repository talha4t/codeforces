#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, m; cin >> n >> m;

    if (m < n)
        cout << "NO\n";
    else if (n & 1) {
        cout << "YES\n";

        cout << (m - n + 1) << ' ';
        for (int i = 1; i < n; i++)
            cout << 1 << ' ';

        cout << '\n';
    }
    else {
        if (m & 1)
            cout << "NO\n";
        else {
            cout << "YES\n";
            for (int i = 1; i <= n - 2; i++)
                cout << 1 << ' ';

            m -= n - 2;

            cout << m / 2 << ' ' << m / 2 << '\n';
        }
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
    Thursday, February 22, 2024 | 15:26:26 (UTC +06:00) Dhaka
*/