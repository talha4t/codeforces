#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    
    int ct = 0, f = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (__gcd(v[i], v[j]) <= 2 and i != j) {
                f = 1;
                break;
            }
        }
        if (f)
            break;
    }
        
    if (f)
        cout << "Yes" << ed;
    else
        cout << "No" << ed;
    
    
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
