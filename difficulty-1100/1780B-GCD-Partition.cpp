#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    ll sum = 0;
    vector<int> v(n);
    for (int &i : v) {
        cin >> i;

        sum += i;
    }

    ll gcd_ = 0, ans = 0;
    for (int i = 0; i < n - 1; i++) {
        gcd_ += v[i];

        sum -= v[i];

        ans = max(ans, __gcd(gcd_, sum));

    }

    cout << ans << '\n';

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
    Friday, February 09, 2024 | 17:22:55 (UTC +06:00) Dhaka
*/