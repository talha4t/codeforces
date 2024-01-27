#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    string s; cin >> s;

    bool ok = false;
    map<string, int> mp;
    for (int i = 0; i < n - 1; i++) {
        string ss; ss = s[i];
        ss += s[i + 1];

        mp[ss]++;

        if (mp[ss] >= 2) {
            if (mp[ss] == 2) {
                if (s[i - 1] == s[i] and s[i] == s[i + 1]);
                else
                    ok = true;
            }
            else 
                ok = true;
        }
        ss.clear();
    }


    if (ok)
        cout << "YES\n";
    else
        cout << "NO\n";

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
    Monday, August 14, 2023 | 22:18:06 (UTC +06:00) Dhaka
*/