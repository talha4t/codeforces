#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool solve() {
    
    int n, k; cin >> n >> k;

    if (n & 1) {
        if (k & 1 and k <= n) {
            cout << "YES" << ed;

            for (int i = 1; i < k; i++)
                cout << 1 << ' ';
            
            cout << n - (k - 1) << ed;
        }
        else 
            cout << "NO" << ed;
    }
    else {
        if ((k % 2 == 0) and k <= n) {
            cout << "YES" << ed;

            for (int i = 1; i < k; i++)
                cout << 1 << ' ';
            
            cout << n - (k - 1) << ed;
        }
        else if ((k % 2) and k <= n / 2) {
            cout << "YES" << ed;
            for (int i = 1; i < k; i++)
                cout << 2 << ' ';
            
            cout << n - (k - 1) * 2 << ed;
        }
        else 
            cout << "NO" << ed;
    }
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
