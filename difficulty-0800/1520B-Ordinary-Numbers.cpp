#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    int ct = 0;
    for (int i = 1; i <= 9; i++) {
        ll x = 0;  
        for (int j = 1; j <= 10; j++) {
            x = x * 10 + i;

            if (x <= n)
                ct++;
        }
    }

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
