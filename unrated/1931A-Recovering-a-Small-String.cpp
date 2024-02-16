#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    map<int, char> mp;
    char ch = 'a';
    for (int i = 1; i <= 26; i++) {
        mp[i] = ch;
        ch++;
    }

    int n; cin >> n;

    string mn = "zzzz";
    for (int i = 1; i <= 26; i++) {
        for (int j = 1; j <= 26; j++) {
            for (int k = 1; k <= 26; k++) {
                
                if (i + j + k == n) {
                    string ans = "";
                    ans.push_back(mp[i]);
                    ans.push_back(mp[j]);
                    ans.push_back(mp[k]);

                    mn = min(ans, mn);
                }
            }
        }

    }

    cout << mn << '\n';

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
    Tuesday, February 13, 2024 | 20:36:43 (UTC +06:00) Dhaka
*/