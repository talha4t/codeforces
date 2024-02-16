#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
const int mod = 1e9 + 7;

bool solve() {
    
    int n; cin >> n;

    vector<int> a(n), b(n);
    for (int &i : a)
        cin >> i;
    for (int &i : b)
        cin >> i;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    int ans = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] <= b[i]) {
            cout << 0 << '\n';

            return true;
        }

        int ind = lower_bound(b.begin() + i, b.end(), a[i]) - b.begin();

        ans = ans * 1LL * (ind - i) % mod;
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
    Friday, February 16, 2024 | 11:28:04 (UTC +06:00) Dhaka
*/