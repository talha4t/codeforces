#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool solve() {
    
    int n, k; cin >> n >> k;

    if (n >= k) {
        if (n % k == 0 or n == k)
            cout << 1 << ed;
        else {
            cout << 2 << ed;
        }
    }
    else 
        cout << (int)ceil(1.0 * k / n) << ed;
        
    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
