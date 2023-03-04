#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    ll x, y; cin >> x >> y;
    ll a, b; cin >> a >> b;


    ll sum = 0, c = 0;
    if (x < y) {
        sum = a * (y - x);

        // y -= (y - x);

        ll t = (y - (y - x)) * b;
        
        c = t + sum;

    }
    else {
        sum = a * (x - y);


        ll t = (x - (x - y)) * b;

        c = t + sum;
    }

    ll d = a * (x + y);

    if (c < d)
        cout << c << ed;
    else
        cout << d << ed;

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
