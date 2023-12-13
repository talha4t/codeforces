#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    string s; cin >> s;
    
    int br = 0, adj_zero = 0, adj_one = 0;
    for (int i = s.size() - 1; i > 0; i--) {
        if (s[i] == '0' && s[i - 1] == '0') {
            br = i - 1;
            adj_zero = 1;
            break;
        }
    }

    if (!adj_zero) {
        cout << "YES\n";
        
        return true;
    }

    for (int i = br; i > 0; i--) {
        if (s[i] == '1' && s[i - 1] == '1')
            adj_one = 1;
    }

    if (!adj_one)
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
    Saturday, November 04, 2023 | 22:09:37 (UTC +06:00) Dhaka
*/