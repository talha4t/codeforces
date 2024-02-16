#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, k, r, c;
    cin >> n >> k >> r >> c;

    int tmp = k;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((i + j) % k == (r + c) % k)
                cout << 'X';
            else
                cout << '.';
        }
        cout << '\n';
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
    Tuesday, December 19, 2023 | 21:25:03 (UTC +06:00) Dhaka
*/