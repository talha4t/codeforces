#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    ll n; cin >> n;

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    ll ct = 1;
    for (int i = 1; i < n; i++) {
        if (v[i] != v[i - 1])
            break;
        else
            ct++;
    }

    sort(v.rbegin(), v.rend());
    ll c = 1;
    for (int i = 1; i < n; i++) {
        if (v[i] != v[i - 1])
            break;
        else
            c++;
    }

    // cerr << ct << ed;
    if (ct == n)
        cout << (n * (n - 1)) << ed;
    else
        cout << ct * c * 2 << ed;
        
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

//github.com/talha4t (Talha Mahmud)
