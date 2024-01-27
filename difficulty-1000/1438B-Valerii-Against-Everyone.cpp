#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> b(n);
    map<int, int> mp;
    for (int &i : b) {
        cin >> i;

        mp[i]++;
    }

    bool ok = false;
    for (auto u : mp) {
        if (u.second > 1)
            ok = true;
    }

    if (ok)
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
    Saturday, November 04, 2023 | 18:53:42 (UTC +06:00) Dhaka
*/