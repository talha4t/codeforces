#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;
    string s; cin >> s;

    int cnt = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '*' and s[i + 1] == '*')
            break;
        
        if (s[i] == '@')
            cnt++;

    }

    cout << cnt << '\n';

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
    Sunday, February 18, 2024 | 20:50:23 (UTC +06:00) Dhaka
*/