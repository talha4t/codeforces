#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, k; cin >> n >> k;

    string s; cin >> s;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            ans++;

            i += (k - 1);
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
    Thursday, September 21, 2023 | 23:39:02 (UTC +06:00) Dhaka
*/