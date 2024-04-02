#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    string s; cin >> s;

    if (s.find("it") != string::npos)
        cout << "YES";
    else
        cout << "NO";

    cout << "\n";
    
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
    Tuesday, April 02, 2024 | 23:15:06 (UTC +06:00) Dhaka
*/