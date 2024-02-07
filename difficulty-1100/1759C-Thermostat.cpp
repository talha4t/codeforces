#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int l, r, x;
    cin >> l >> r >> x;

    int a, b; cin >> a >> b;

    if (a == b)
        cout << 0;
    else if (abs(a - b) >= x)
        cout << 1;
    else if (r - max(a, b) >= x or min(a, b) - l >= x)
        cout << 2;
    else if (r - b >= x and a - l >= x or (r - a >= x and b - l >= x))
        cout << 3;
    else
        cout << -1;

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
    Wednesday, February 07, 2024 | 12:37:58 (UTC +06:00) Dhaka
*/