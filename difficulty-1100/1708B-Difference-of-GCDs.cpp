#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, l, r;
    cin >> n >> l >> r;

    bool ok = true;
    vector<int> v;
    for (int i = 1; i <= n; i++) {
        int x = (l + i - 1) / i * i;

        if (x > r)
            ok = false;

        v.push_back(x);
    }

    if (ok) {
        cout << "YES\n";
        for (auto u : v)
            cout << u << ' ';
    }
    else
        cout << "NO";

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
    Monday, December 18, 2023 | 19:08:32 (UTC +06:00) Dhaka
*/