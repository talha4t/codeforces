#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    ll n; cin >> n;

    if (n & 1)
        cout << 1 << '\n';
    else {
        int cnt = 0;
        for (ll i = 2; i <= n; i++) {
            if (n % i == 0)
                cnt++;
            else
                break;
        }

        cout << cnt + 1 << '\n';

    }
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
    Saturday, July 29, 2023 | 20:46:07 (UTC +06:00) Dhaka
*/