#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool solve() {
    
    int n; cin >> n;

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    bool ok = true;
    for (int i = 1; i < n; i++) {
        v[i] += v[i - 1] - (i - 1);
        if (v[i] < i)
            ok = false;
    }

    if (ok)
        cout << "YES" << ed;
    else
        cout << "NO" << ed;

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