#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, k; cin >> n >> k;
    ll x; cin >> x;

    ll tot_sum = (1LL * n * (n + 1) / 2);
    if (tot_sum >= x) {
        
        ll one_to_k_sum = (1LL * k * (k + 1)) / 2;
        ll n_to_k_sum = tot_sum - (1LL * (n - k) * ((n - k) + 1)) / 2;
        
        if (n_to_k_sum >= x and one_to_k_sum <= x)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    else
        cout << "NO\n";
        
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
    Wednesday, September 27, 2023 | 10:21:36 (UTC +06:00) Dhaka
*/