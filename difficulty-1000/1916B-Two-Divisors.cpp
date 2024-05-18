#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    ll a, b; cin >> a >> b;

    if (b % a)
        cout << a * b / __gcd(a, b);
    else
        cout << (b * b) / a;

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
    Saturday, May 18, 2024 | 15:31:11 (UTC +06:00) Dhaka
*/