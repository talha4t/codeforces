#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int k, n; cin >> k >> n;

    if (k == n) {
        for (int i = 1; i <= n; i++)
            cout << i << ' ';
        
    
        cout << ed;
    }
    else {

        int j = 1, diff = 1;
        for (int i = 1; i <= k; i++) {
            cout << j << ' ';

            if (n - (j + diff) >= (k - (i + 1))) {
                j = j + diff;
                diff++;
            }
            else 
                j++;
        }
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
