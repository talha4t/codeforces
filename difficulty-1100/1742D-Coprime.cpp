#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool cmp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second < p2.second)
        return true;
    else if (p1.second == p2.second)
        return p1.first < p2.second;
 
    return false;
}

bool solve() {
    
    int n; cin >> n;

    map<int, int> mp;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;

        mp[x] = i;
    }
    
    vector<pair<int, int>> vp;
    for (auto u : mp)
        vp.push_back({u.first, u.second});

    sort(vp.rbegin(), vp.rend(), cmp);

    int sum = -1, ans = -1;
    for (int i = 0; i < (int)vp.size(); i++) {
        for (int j = 0; j < (int)vp.size(); j++) {
            int gcd = __gcd(vp[i].first, vp[j].first);

            if (gcd == 1)
                sum = vp[i].second + vp[j].second;

            ans = max(ans, sum);
        }
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
    Saturday, September 02, 2023 | 18:42:25 (UTC +06:00) Dhaka
*/