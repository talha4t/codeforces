#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
const int mod = 1e9 + 7;

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int &i : v)
        cin >> i;

    int ans = 0;
    for (int mask = 0; mask < 30; mask++) {
        int true_cnt = 0, false_cnt = 0;
        for (auto num : v) {
            if (num & (1 << mask)) {
                true_cnt++;
            }
        }
        
        false_cnt = n - true_cnt;

        int t_cnt = 1;
        for (int i = 1; i <= true_cnt; i++)
            t_cnt = (t_cnt % mod * 1LL * (2 % mod)) % mod;

        t_cnt--;

        int f_cnt = 1;
        for (int i = 1; i <= false_cnt; i++)
            f_cnt = (f_cnt % mod * 1LL * (2 % mod)) % mod;
        
        int cnt = (t_cnt % mod * 1LL * f_cnt % mod) % mod;
        int mask_mod = ((1LL << mask) % mod * 1LL * (cnt % mod)) % mod;

        ans = (ans % mod + mask_mod % mod) % mod;
    }

    cout << ans << '\n';

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
    Saturday, February 03, 2024 | 12:48:27 (UTC +06:00) Dhaka
*/