#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    string s; cin >> s;

    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
        mp[s[i]]++;
    
    int cnt = 0;
    for (auto u : mp) {
        if (u.second > 1)
            cnt++;
    }

    if (cnt > 1)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
    
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
    Saturday, May 13, 2023 | 07:07:48 (UTC +06:00) Dhaka
*/