#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {

    int n; cin >> n;

    vector<char> v;
    char c = 'a';
    for (int i = 1; i <= 26; i++) {
        v.push_back(c);
        c++;
    }

    map<int, int> mp;
    for (int i = 1; i <= n; i++) {
        int ch; cin >> ch;

        mp[ch]++;

        cout << v[mp[ch] - 1];

    }

    cout << '\n';

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
    Tuesday, February 06, 2024 | 20:53:34 (UTC +06:00) Dhaka
*/