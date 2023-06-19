#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {

    int n, k, q;
    cin >> n >> k >> q;

    ll cnt = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        if (x <= q) {
            cnt++;
        }
        else {
            ll d = max(0ll, cnt - k + 1);
            ans += (d * (d + 1)) / 2;
            cnt = 0;
        }
    }
    
    
    ll d = max(0ll, cnt - k + 1);
    ans += (d * (d + 1)) / 2;

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
    Wednesday, June 07, 2023 | 04:32:20 (UTC +06:00) Dhaka
*/