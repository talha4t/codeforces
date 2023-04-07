#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {

    int n, m; cin >> n >> m;

    vector<int> v(n + 1);
   

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    vector<ll> pref(n + 1);
    vector<ll> suff(n + 1);
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1];

        if (v[i] < v[i - 1])
            pref[i] += (v[i - 1] - v[i]);
    }
     for (int i = n; i >= 1; i--) {
        suff[i] = suff[i + 1];

        if (v[i] < v[i + 1])
            suff[i] += (v[i + 1] - v[i]);
    }

    while(m--) {
        int l, r;
        cin >> l >> r;

        if (l > r)
            cout << suff[r] - suff[l] << ed;
        else
            cout << pref[r] - pref[l] << ed;
    }
    
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Saturday, April 08, 2023 | 04:47:16 (UTC +06:00) Dhaka
*/