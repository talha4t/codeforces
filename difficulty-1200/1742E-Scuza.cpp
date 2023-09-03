#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, q; cin >> n >> q;

    vector<ll> a(n + 1), pref(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];

        pref[i] = pref[i - 1] + a[i];
    }


    for (int i = 1; i <= n; i++)
        a[i] = max(a[i], a[i - 1]);

    while(q--) {
        int k; cin >> k;

        if (k < a[0])
            cout << 0 << ' ';
        else {
            int indx = upper_bound(a.begin() + 1, a.end(), k) - a.begin() - 1;

            cout << pref[indx] << ' ';
        }
    }

    cout << '\n';
    
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
    Monday, September 04, 2023 | 01:07:26 (UTC +06:00) Dhaka
*/
