#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {

    int n; cin >> n;

    if (n % 7 == 0)
        cout << n << ed;
    else {
        n -= n % 10;

        while(n % 7 != 0)
            n++;
        
        cout << n << ed;
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
