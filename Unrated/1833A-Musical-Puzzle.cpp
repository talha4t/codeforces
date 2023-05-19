#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    string s; cin >> s;

    set<string> se;
    int cnt = s.size();
    for (int i = 0; i < s.size() - 1; i++) {
        string ss;
        ss.push_back(s[i]);
        ss.push_back(s[i + 1]);

        se.insert(ss);
    }

    cout << se.size() << '\n';

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
    Friday, May 19, 2023 | 20:36:10 (UTC +06:00) Dhaka
*/