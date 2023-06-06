#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    string s; cin >> s;

    char tmp = s[0];
    vector<char> ch;
    for (int i = 1; i < n; i++) {
        if (tmp == s[i]) {
            ch.push_back(tmp);
            tmp = s[i + 1];
            i++;
        }
    }
    
    for (auto u : ch)
        cout << u;

    cout << '\n';

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
    Tuesday, June 06, 2023 | 20:35:29 (UTC +06:00) Dhaka
*/