#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

int a[100010], pf[100010];
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    
    while(t--) {
        int l, r;
        cin >> l >> r;
        
        l--;
        cout << ((r * (r + 1)) / 2) - ((l * (l + 1)) / 2) << ed; 
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
