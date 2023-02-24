#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    ll n; cin >> n;

    ll temp = n;
    int ct = 0, f = 0;
    for (int i = 0; i < 100; i++) {
        if (n % 6 == 0) {
            n /= 6;
        }
        else 
            n = n * 2;
        
        ct++;
        if (n == 1) {
            f = 1;
            break;
        }
        
    }

    if (temp == 1)
        cout << 0 << ed;
    else if (f)
        cout << ct << ed;
    else 
        cout << -1 << ed;
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



/*

*/