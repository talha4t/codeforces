#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;
    string s; cin >> s;

    int ans = 0;
    for (int i = 1; i < n - 1; i++) {
        if (s[i - 1] == 'm' && s[i] == 'a' && s[i + 1] == 'p' && s[i + 2] == 'i' && s[i + 3] == 'e') {
            ans++;

            i += 4;
        }
        if (s[i - 1] == 'm' && s[i] == 'a' && s[i + 1] == 'p') {
            ans++;

            i += 2;
        }
        if (s[i - 1] == 'p' && s[i] == 'i' && s[i + 1] == 'e') {
            ans++;

            i += 2;
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
    Sunday, March 17, 2024 | 12:48:32 (UTC +06:00) Dhaka
*/