#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    ll p; cin >> p;

    ll n = (-1 + sqrt(1 + 8 * p)) / 2;

    if ((n * (n + 1)) / 2 == p)
        cout << n;
    else
        cout << -1;

    cout << '\n';
    
    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Saturday, February 03, 2024 | 19:56:31 (UTC +06:00) Dhaka
*/