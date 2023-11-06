#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int w, h; cin >> w >> h;

    vector<vector<int>> v(4);
    for (int i = 0; i < 4; i++) {
        int k; cin >> k;
        for (int j = 0; j < k; j++) {
            int x; cin >> x;

            v[i].push_back(x);
        }
    }

    ll ans = 1LL * (v[0].back() - v[0][0]) * h;
    ans = max(ans, 1LL * (v[1].back() - v[1][0]) * h);
    ans = max(ans, 1LL * (v[2].back() - v[2][0]) * w);
    ans = max(ans, 1LL * (v[3].back() - v[3][0]) * w);

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
    Monday, November 06, 2023 | 20:26:03 (UTC +06:00) Dhaka
*/