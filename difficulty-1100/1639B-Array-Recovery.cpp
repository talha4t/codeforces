#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;
    
    vector<int> d(n), a(n);
    for (int &i : d)
        cin >> i;

    a = d;

    bool ok = true;
    for (int i = 1; i < n; i++) {
        if (a[i - 1] - d[i] < 0 or d[i] == 0)
            a[i] = a[i - 1] + d[i];
        else
            ok = false;
    }

    if (ok) {
        for (auto u : a)
            cout << u << ' ';
    }
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
    Thursday, December 14, 2023 | 14:24:00 (UTC +06:00) Dhaka
*/