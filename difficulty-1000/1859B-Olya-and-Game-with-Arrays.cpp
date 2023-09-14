#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> b, c;
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        int m; cin >> m;

        vector<int> a(m);
        for (int i = 0; i < m; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        ans += a[1];

        b.push_back(a[0]);
        c.push_back(a[1]);
    }

    sort(b.begin(), b.end());
    sort(c.begin(), c.end());

    ans -= (c[0] - b[0]);

    cout << ans << '\n';

    return true;
}

int main() {
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
    Tuesday, September 12, 2023 | 19:49:20 (UTC +06:00) Dhaka
*/