#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool is_possible(ll h, int a[], int x, int n) {
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        if (h >= a[i])
            sum += (h - a[i]);
    }
    
    return sum <= x;
}

bool solve() {
    
    int n, x; cin >> n >> x;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    sort(a, a + n);

    ll l = 1, r = 1e10;
    while(r - l > 1LL) {
        ll mid = (l + r) / 2;

        if (is_possible(mid, a, x, n))
            l = mid;
        else
            r = mid - 1;
    }

    if (is_possible(r, a, x, n))
        cout << r;
    else
        cout << l;
    
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
    Friday, September 22, 2023 | 10:45:32 (UTC +06:00) Dhaka
*/