#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<set<int>> v;
    set<int> s;
    for (int i = 1; i <= n; i++) {
        int k; cin >> k;

        set<int> tmp;
        for (int j = 0; j < k; j++) {
            int x; cin >> x;

            s.insert(x);
            tmp.insert(x);
        }
        v.push_back(tmp);
    }

    int ans = -1;
    for (int i = 1; i <= 50; i++) {
        set<int> se;
        for (int j = 0; j < n; j++) {
            if (v[j].count(i))
                continue;
            
            for (auto k : v[j])
                se.insert(k);
        }
        if (se.size() != s.size())
            ans = max(ans, (int)se.size());
    }

    cout << ans << '\n';
    
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
    Tuesday, September 26, 2023 | 09:17:22 (UTC +06:00) Dhaka
*/