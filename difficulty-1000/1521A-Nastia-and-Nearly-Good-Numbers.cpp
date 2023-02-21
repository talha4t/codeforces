#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    ll a, b; cin >> a >> b;

    if (b > 1) {
        cout << "YES" << ed;

        cout << a << ' ' << ((a * b) - a) << ' ' <<  a * b << ed;
    }
    else
        cout << "NO" << ed;

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
