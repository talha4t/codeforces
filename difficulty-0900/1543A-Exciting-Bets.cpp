#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int a, b; cin >> a >> b;

    if (a == b)
        cout << "0 0" << ed;
    else {
        ll diff = abs(a - b);

        if ((a % diff) == (b % diff))
            cout << diff << ' ' << min((a % diff), diff - (a % diff)) << ed;
        else 
            cout << "0 0" << ed;
    }
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
