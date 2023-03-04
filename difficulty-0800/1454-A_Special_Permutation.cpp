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
        int n;
        cin >> n;

        for (int i = 2; i <= n; i++) 
            cout << i << ' ';
        
        cout << 1 << ed;
    }
    
    return 0;
}


