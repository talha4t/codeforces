#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    int s, e; cin >> s >> e;
    int f_s = s, f_e = e;
    vector<pair<int, int>> p;
    for (int i = 2; i <= n; i++) {
        cin >> s >> e;

        if (f_s <= s)
            p.push_back({s, e});
    }

    bool ok = true;
    for (auto u : p) {
        if (f_e <= u.second)
            ok = false;
    }

    if (ok)
        cout << f_s;
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

    for (int cs = 1; cs <= t; cs++){
        solve();
    }
    
    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Sunday, September 24, 2023 | 20:39:27 (UTC +06:00) Dhaka
*/