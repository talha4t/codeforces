#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    ll n; cin >> n;

    if (n % 2)
        cout << "YES" << ed;
    else {
        
        int f = 0;
        while(n >= 3) {
            n /= 2;
            if (n % 2) {
                f = 1;
                break;
            }
        }

        if (f)
            cout << "YES" << ed;
        else 
            cout << "NO" << ed;
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
