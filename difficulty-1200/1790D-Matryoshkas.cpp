#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    map<int, int> mp;
    vector<int> v(n);
    for (auto &i : v) {
        cin >> i;

        mp[i]++;
    }

    sort(v.begin(), v.end());
    
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (mp[v[i]])
            ans++;
        
        int _there = v[i];
        while(mp[_there]) {
            mp[_there]--;
            _there++;
        }
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
    Friday, September 29, 2023 | 20:55:20 (UTC +06:00) Dhaka
*/