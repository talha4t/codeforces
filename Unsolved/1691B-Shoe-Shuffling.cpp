#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<ll> v(n + 1);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    int ct = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == v[i + 1]) {
            ct++;
            cout << i + 2 << ' ' << i + 1 << ' ';
            if (ct >= 2)
                i++;
        }

    }

    cout << ed;
    if (ct == 0)
        cout << -1 << ed;
  
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
