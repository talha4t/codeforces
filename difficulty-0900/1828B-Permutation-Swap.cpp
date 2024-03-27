#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int &i : v)
        cin >> i;

    int res = 0;
    for (int i = 0; i < n; i++)
        res = __gcd(res, abs(v[i] - (i + 1)));

    cout << res << '\n';
    
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
    Wednesday, March 27, 2024 | 21:09:10 (UTC +06:00) Dhaka
*/