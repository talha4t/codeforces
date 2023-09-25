#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    int q = n;
    vector<pair<int, int>> v;
    while(q--) {
        int d, s; cin >> d >> s;

        v.push_back({d, s});
    }

    sort(v.begin(), v.end());
    

    int ans = ((v[0].second + 1) / 2) + (v[0].first - 1);

    for (int i = 1; i < n; i++) {

        int res = ((v[i].second + 1) / 2) + (v[i].first - 1);

        ans = min(res, ans);
    }

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
    Thursday, September 07, 2023 | 20:56:57 (UTC +06:00) Dhaka
*/