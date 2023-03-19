#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool solve() {
    int n; cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    int m = 0, b = 0;
    for (int i = 0; i < n - 1; i++) {
        if (v[i] % 2)   
            b += v[i];
        else
            m += v[i];
    }

    if (v[n - 1] % 2)
        b += v[n - 1];
    else 
        m += v[n - 1];

    if (m > b)
        cout << "YES" << ed;
    else
        cout << "NO" << ed;

            
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
