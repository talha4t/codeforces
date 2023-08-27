#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    map<string, bool> mp;
    vector<string> v;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        v.push_back(s);

        mp[s] = true;
    }

    for (int i = 0; i < n; i++) {
        string a, b;

        bool ok = false;
        for (int j = 0; j < v[i].size(); j++) {
            a = v[i].substr(0, j);
            b = v[i].substr(j, (v[i].size() - j));

            if (mp[a] == true and mp[b] == true)
                ok = true;
        }

        if (ok)
            cout << 1;
        else
            cout << 0;
    }

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
    Sunday, August 27, 2023 | 17:34:54 (UTC +06:00) Dhaka
*/