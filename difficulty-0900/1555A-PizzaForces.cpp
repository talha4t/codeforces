#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {

    ll n; cin >> n;

    if (n <= 6)
        cout << 15 << ed;
    else if (n & 1) {
        n++;

        ll m = n * 2.5; 
        cout << m << ed;
    }
    else {
        ll m = n * 2.5;
        cout << m << ed;
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
