#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool solve() {
    
    int n, k; cin >> n >> k;

    int before = k / (n - 1);

    if ((k + before) % n)
        cout << k + before << ed;
    else 
        cout << (k + before) - 1 << ed;

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
