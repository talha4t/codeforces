#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    string s; cin >> s;

    int destination = s.size() - 1, source = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
        destination = i;
        if (s[i] == '0')
            break;
    }

    for (int i = 0; i <= destination; i++) {
        source = i;
        if (s[i] == '1')
            break;
    }

    ll cnt = 0, ans = 0;
    for (int i = source; i <= destination; i++) {
        if (s[i] == '1')
            cnt++;
        if (s[i] == '0')
            ans += (cnt + 1);
    }

    cout << (source == destination ? 0 : ans) << '\n';

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
    Saturday, May 18, 2024 | 02:50:58 (UTC +06:00) Dhaka
*/