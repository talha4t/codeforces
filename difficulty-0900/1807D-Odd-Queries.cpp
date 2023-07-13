#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n, q; cin >> n >> q;

    ll sum = 0;
    ll v[n];
    int pf[n + 3];
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        pf[i] = pf[i - 1] + v[i];
        sum += v[i];

    }

    while(q--) {
        ll l, r, k;
        cin >> l >> r >> k;

        int temp = pf[r] - pf[l - 1];

        ll res = sum - temp;

        ll t = k * ((r + 1) - l);

        res += t;
        if (res % 2)
            cout << "YES" << ed;
        else
            cout << "NO" << ed;

        t = 0, res = 0;
        
    }

    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
