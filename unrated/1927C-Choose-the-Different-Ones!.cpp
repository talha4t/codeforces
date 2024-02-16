#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, m, k;
    cin >> n >> m >> k;

    set<int> se_a;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;

        if (x <= k)
            se_a.insert(x);
    }
    set<int> se_b;
    for (int i = 1; i <= m; i++) {
        int x; cin >> x;

        if (x <= k)
            se_b.insert(x);
    }

    bool ok = true;
    for (int i = 1; i <= k; i++) {
        if (se_a.find(i) == se_a.end() && se_b.find(i) == se_b.end())
            ok = false;
    }

    if (se_a.size() < k / 2 or se_b.size() < k / 2)
        ok = false;


    cout << (ok ? "YES" : "NO") << '\n';

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
    Wednesday, February 07, 2024 | 11:13:19 (UTC +06:00) Dhaka
*/