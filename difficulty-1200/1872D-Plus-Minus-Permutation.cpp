#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

ll sum (ll n) {
    return (n * (n + 1)) / 2;
}

bool solve() {
    
    int n, x, y;
    cin >> n >> x >> y;

    int add = (n / x) - (n / (1LL * x * y / __gcd(x, y)));
    int del = (n / y) - (n / (1LL * x * y / __gcd(x, y)));

    ll ans = (sum(n) - sum(n - add)) - sum(del);

    cout << ans << '\n';

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
    Saturday, September 09, 2023 | 10:10:39 (UTC +06:00) Dhaka
*/