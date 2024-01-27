#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    string s; cin >> s;

    if (s == "abc" or s == "acb" or s == "bac" or s == "cba")
        cout << "YES\n";
    else
        cout << "NO\n";
        
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
    Thursday, September 21, 2023 | 20:35:42 (UTC +06:00) Dhaka
*/