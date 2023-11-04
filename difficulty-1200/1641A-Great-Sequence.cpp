#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, x; cin >> n >> x;

    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> v[i];

        mp[v[i]]++;
    }

    sort(v.begin(), v.end());
    
    for (int i = n - 1; i >= 0; i--) {
        if (v[i] % x == 0 and mp[v[i] / x] and mp[v[i]]) {
            mp[v[i] / x]--;
            mp[v[i]]--;
        }
    }

    int ans = 0;
    for (auto u : mp) {
        if (u.second)
            ans += u.second;
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
    Sunday, September 10, 2023 | 06:46:11 (UTC +06:00) Dhaka
*/