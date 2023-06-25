#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    ll x, y; cin >> x >> y;

    if (abs(x - y) > 1)
        cout << "YES\n";
    else
        cout << "NO\n";
        
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
    Sunday, June 25, 2023 | 19:29:59 (UTC +06:00) Dhaka
*/