#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    ll n; cin >> n;

    if (n < 4 or (n & 1))
        cout << -1 << ed;
    else {

        ll tmp; 
        if (n % 6 == 0)
            tmp = n / 6;
        else
            tmp = (n / 6) + 1;
        
        cout << tmp << ' ' << n / 4 << ed;
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

