#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    
    while(t--) {
        ll l, r;
        cin >> l >> r;
        
        ll mx = max(l, r);
        ll mn = min(l, r);

        mn--;
        cout << ((mx * (mx + 1)) / 2) - ((mn * (mn + 1)) / 2) << ed; 
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
