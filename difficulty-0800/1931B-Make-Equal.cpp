#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    ll avg = 0;
    vector<int> v(n);
    for (int &i : v) {
        cin >> i;

        avg += i;
    }

    avg /= n;
    ll cur = 0;
    for (auto u : v) {
        cur += u;
        if (cur < avg) {
            cout << "NO\n";
            
            return true;
        }

        cur -= avg;
    }

    cout << "YES\n";
    
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
    Tuesday, February 13, 2024 | 23:50:53 (UTC +06:00) Dhaka
*/