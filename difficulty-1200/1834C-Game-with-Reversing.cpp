#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    string s, t; cin >> s >> t;

    int reverse_diff = 0, diff = 0;
    for (int i = 0; i < n; i++)
        diff += s[i] != t[i];

    reverse(s.begin(), s.end());

    for (int i = 0; i < n; i++)
        reverse_diff += s[i] != t[i];

    int ans = 1e9;
    if (!(diff & 1))
        ans = min(ans, 2 * diff);
    else
        ans = min(ans, (2 * diff) - 1);
    
    if (reverse_diff == 0)
        ans = min(ans, 2);
    else if (reverse_diff & 1)
        ans = min(ans, 2 * reverse_diff);
    else
        ans = min(ans, (2 * reverse_diff) - 1);

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
    Thursday, September 28, 2023 | 11:03:04 (UTC +06:00) Dhaka
*/