#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    ll x, n; cin >> x >> n;


    if (n % 4 == 0)
        cout << x << ed;
    else if ((n - 1) % 4 == 0) {
        if (x & 1)
            cout << x + n << ed;
        else
            cout << x - n << ed;
    }
    else if ((n - 2) % 4 == 0) {
        if (x & 1)
            cout << x - 1 << ed;
        else
            cout << x + 1 << ed;
    }
    else {
        if (x & 1)
            cout << x - 1 - n << ed;
        else
            cout << x + 1 + n << ed;
    }
    
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


