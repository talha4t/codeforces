#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {

    int n; cin >> n;

    if (n % 2) {
        for (int i = 1; i <= n; i++)
            cout << 8 << ' ';
        
        cout << ed;
    }    
    else {
        cout << 1 << ' ' << 3 << ' ';

        for (int i = 1; i <= n - 2; i++) {
            cout << 2 << ' ';
        }

        cout << ed;
    }

    cerr << (1 ^ 3 ^ 2 ^ 2) << ed;

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
