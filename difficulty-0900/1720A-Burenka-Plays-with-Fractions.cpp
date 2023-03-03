#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll m = (1L * a * d);
    ll n = (1L * b * c);
    if (m == n) {
        cout << 0 << ed;
    }
    else if (a == 0 or c == 0) {
        cout << 1 << ed;
    }
    else {
        if ((a * d) > (b * c)) {
            
            if ((a * d) % (b * c) == 0)
                cout << 1 << ed;
            else 
                cout << 2 << ed;
        }
        else {
            if ((b * c) % (a * d)  == 0)
                cout << 1 << ed;
            else 
                cout << 2 << ed;
        }
    }
    
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
