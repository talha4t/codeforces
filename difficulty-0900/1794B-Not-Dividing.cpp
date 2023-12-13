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

    for (int i = 0; i < n; i++) {
        if (v[i] == 1)
            ++v[i];
    }
    
    cout << v[0] << ' ';
    for (int i = 1; i < n; i++) {
        if (v[i] % v[i - 1] == 0) {
            cout << ++v[i] << ' ';
        }
        else 
            cout << v[i] << ' ';
    }

    cout << ed;
    
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
