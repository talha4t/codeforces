#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    string s; cin >> s;

    int n = s.size();

    if (s[n - 1] == '?')
        s[n - 1] = '1';
        
    for (int i = n - 2; i >= 0; i--) {
        if (s[i] == '?') {
            char ch;
            if (s[i + 1] == '1')
                ch = '1';
            else
                ch = '0';
            
            s[i] = ch;
        }
    }

    cout << s << '\n';

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
    Friday, September 22, 2023 | 19:09:14 (UTC +06:00) Dhaka
*/