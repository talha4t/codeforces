#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    string s; cin >> s;

    string ss = "codeforces";

    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ss[i])
            ans++;
    }

    cout << ans << ed;
    
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
    Saturday, May 06, 2023 | 20:30:54 (UTC +06:00) Dhaka
*/