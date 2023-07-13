#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool solve() {
    
    int n, k; cin >> n >> k;

    vector<int> v(n);
    int cur = 1, ct = 0;
    for (int i = 0; i < n; i++) {
        cin >>  v[i];

        if (v[i] == cur) {
            cur++;
            ct++;
        }
    }

    cout << (int)ceil(1.0 * (n - ct) / k) << ed;
    
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
