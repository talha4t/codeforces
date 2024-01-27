#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    ll n; cin >> n;

    ll sum = 0;

    vector<int>v(n);
    for (int i = 0; i < n; i++)  {
        cin >> v[i];
        sum  += v[i];
    }

    ll z = sum % n;

    ll ans = 1L * (n - z) * z;
    
    cout << ans << ed;

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
