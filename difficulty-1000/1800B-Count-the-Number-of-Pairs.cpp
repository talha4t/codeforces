#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, k; cin >> n >> k;

    string s; cin >> s;

    map<char, int> mp;
    for (auto u : s)
        mp[u]++;

    int ans = 0;
    for (char ch = 'a'; ch <= 'z'; ch++) {
        int mn = min(mp[ch], mp[ch - 32]);

        ans += mn;

        mp[ch] -= mn;
        mp[ch - 32] -= mn;
    }

    for (char ch = 'a'; ch <= 'z'; ch++) {
        int add = max(mp[ch], mp[ch - 32]);

        int mn = min(k, add / 2);

        ans += mn;

        k -= mn;
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
    Monday, October 23, 2023 | 20:23:58 (UTC +06:00) Dhaka
*/