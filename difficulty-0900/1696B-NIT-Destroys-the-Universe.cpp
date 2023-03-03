#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) 
        cin >> v[i];

    int ct = 0;
    for (int i = 1; i <= n; i++) {
        if (v[i - 1] == 0 and v[i] != 0) {
            ct++;

        }
    }
    ct = min(ct, 2);

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
