#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int x, y; cin >> x >> y;

    cout << 2 * (x - y) << '\n';
    for (int i = x; i > y; i--)
        cout << i << ' ';

    for (int i = y; i < x; i++)
        cout << i << ' ';

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
    Saturday, February 10, 2024 | 10:07:24 (UTC +06:00) Dhaka
*/