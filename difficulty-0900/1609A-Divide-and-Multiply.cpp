#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    
    ll ans = 0, mul = 1;
    for (int i = 0; i < n; i++) {
        while (!(v[i] & 1)) {
            mul *= 2;
            v[i] /= 2;
        }
        ans += v[i];
    }

    sort(v.begin(), v.end());
    
    cout << (ans - v[n - 1]) + (v[n - 1] * mul) << ed;
    
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

// *    author:  talha4t
//github.com/talha4t (Talha Mahmud)


