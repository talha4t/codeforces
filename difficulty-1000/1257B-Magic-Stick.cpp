#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    ll x, y; cin >> x >> y;

    if (x >= y)
        cout << "YES" << ed;
    else {
        bool ok = false;
        for (int i = 0; i < 99; i++) {
            if (x % 2 and x != 1)
                x--;
            else 
                x = (3 * x) / 2;
            
            if (x >= y) {
                ok = true;
                break;
            }
        }

        if (ok)
            cout << "YES" << ed;
        else
            cout << "NO" << ed;
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

//github.com/talha4t (Talha Mahmud)
