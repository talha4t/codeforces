#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;
    string s; cin >> s;

    int ans = 0;
    set<char> se;
    for (int i = 0; i < (int)s.size(); i++) {
        se.insert(s[i]);

        ans += (int)se.size();
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
    Saturday, January 27, 2024 | 20:01:54 (UTC +06:00) Dhaka
*/