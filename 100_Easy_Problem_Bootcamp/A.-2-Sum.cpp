#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    ll n, x; cin >> n >> x;

    vector<ll> v(n);
    for (int i = 0; i < n; i++) 
        cin >> v[i];

    ll sum = 0, f = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[j] + v[i] == x) {
                f = 1;
                break;
            }
        }
    }

    if (f)
        cout << "YES" << ed;
    else 
        cout << "NO" << ed;
    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        solve();
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
