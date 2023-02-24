#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    int ct = 0;
    for (int i = 2; i <= n; i++) {
        int p = (1 << i) - 1;

        if (n % p == 0) {
            ct = n / p;
            break;
        }
    }

    // if (f)
    cout << ct << ed;
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
