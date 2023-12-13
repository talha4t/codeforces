#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    map<int, int> mp;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;

        mp[x]++;
    }

    bool ok = true;
    for (auto u : mp) {
        if (u.second == 1)
            ok = false;
    }

    if (ok) {
        int last = 0, second = 0;
        for (auto u : mp) {
            last += u.second;

            cout << last << ' ';
            for (int i = second + 1; i < last; i++)
                cout << i << ' ';
            
            second = last;
        }
    }
    else
        cout << -1;

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
    Tuesday, October 03, 2023 | 10:15:08 (UTC +06:00) Dhaka
*/