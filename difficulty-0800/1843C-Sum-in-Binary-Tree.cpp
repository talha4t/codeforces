#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    ll n; cin >> n;

    ll ans = 0;
    while(n > 0) {
        ans += n;
        n /= 2;
    }

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
    Wednesday, June 21, 2023 | 01:06:08 (UTC +06:00) Dhaka
*/