#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<ll> vv(n);
    ll x = 0;
    for (int i = 0; i < n; i++) {
        vv[i] = v[i] + x;

        x = max(x, vv[i]);

    }

    for (int i = 0; i < n; i++)
        cout << vv[i] << ' ';

    cout << ed;

    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
