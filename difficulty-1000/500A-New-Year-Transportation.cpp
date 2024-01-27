#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool solve() {
    
    ll n, t; cin >> n >> t;

    int a[n + 8];
    for (int i = 1; i <= n - 1; i++)
        cin >> a[i];

    bool ans = false;
    for (int i = 1; i <= n; ) {
        if (t == i) {
            ans = true;
            break;
        }
        
        i = a[i] + i;
    }

    if (ans)
        cout << "YES" << ed;
    else 
        cout << "NO" << ed;

    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
