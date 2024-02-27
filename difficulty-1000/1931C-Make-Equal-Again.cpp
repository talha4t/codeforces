#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    int l = 1, r = n;
    while(l <= n && v[l] == v[1])
        l++;
    while(r >= l && v[r] == v[n])
        r--;

    if (v[1] != v[n])
        cout << min(n - l + 1, r) << '\n';
    else
        cout << r - l + 1 << '\n';

    cerr << l << ' ' << r << '\n';
    
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
    Wednesday, February 14, 2024 | 10:20:12 (UTC +06:00) Dhaka
*/