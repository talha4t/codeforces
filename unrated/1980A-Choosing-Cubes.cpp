#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, m; cin >> n >> m;

    string s; cin >> s;

    map<char, int> mp;
    for (int i = 0; i < n; i++)
        mp[s[i]]++;

    int ans = 0;
    if ((int)mp.size() != 7) {
        int needed = 7 - (int)mp.size();

        ans = needed * m;
    }
    
    for (auto u : mp) {
        if (u.second <= m)
            ans += (m - u.second);
    }

    cout << ans << '\n';
    
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
    Monday, June 03, 2024 | 21:00:02 (UTC +06:00) Dhaka
*/