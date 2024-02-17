#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];

        v[i] += i + 1;
    }

    sort(v.rbegin(), v.rend());

    for (auto u : v)
        cerr << u << ' ';

    cerr << '\n';
    
    for (int i = 1; i < n; i++)
        v[i] = min(v[i], v[i - 1] - 1);

    for (int i = 0; i < n; i++)
        cout << v[i] << ' ';
    
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
    Saturday, February 17, 2024 | 22:09:15 (UTC +06:00) Dhaka
*/