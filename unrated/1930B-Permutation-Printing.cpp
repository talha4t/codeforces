#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    int j = n, k = 1;
    if (n & 1)
        j = n - 1, k = 1;

    vector<int> v;
    for (int i = 1; i <= n; i++) {
        if (i & 1) {
            v.push_back(j);
            j -= 2;
        }
        else {
            v.push_back(k);
            k += 2;
        }
    }

    if (n & 1) {
        v.pop_back();
        v.push_back(n);
    }

    for (auto u : v)
        cout << u << ' ';
    
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
    Saturday, February 17, 2024 | 20:44:41 (UTC +06:00) Dhaka
*/