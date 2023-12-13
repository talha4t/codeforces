#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;
    string s; cin >> s;

    map<char, int> mp;
    int mx = 0;
    for (int i = 0; i < n; i++) {
        mp[s[i]]++;

        mx = max(mx, mp[s[i]]);
    }

    int ans = 0;
    if (mx > n / 2)
        ans = mx - (n - mx);
    else {
        if (n & 1)
            ans = 1;
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
    Tuesday, December 05, 2023 | 22:10:02 (UTC +06:00) Dhaka
*/