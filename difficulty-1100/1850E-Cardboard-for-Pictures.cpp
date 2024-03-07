#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    ll n, c; cin >> n >> c;

    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    int l = 1, r = 1e9;
    while(l <= r) {
        ll mid = l + (r - l) / 2;

        ll s = 0;
        for (int i = 0; i < n; i++) {
            s += (a[i] + 2 * mid) * (a[i] + 2 * mid);

            if (s > c)
                break;
        }

        if (s == c) {
            cout << mid << '\n';

            return true;
        }

        if (s > c)
            r = mid - 1;
        else
            l = mid + 1;
    }

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
    Thursday, March 07, 2024 | 21:36:05 (UTC +06:00) Dhaka
*/