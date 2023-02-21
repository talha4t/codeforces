#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n, m; cin >> n >> m;

    vector<int> v(m);
    for (int i = 0; i < m; i++)
        cin >> v[i];

    
    sort(v.begin(), v.end());


    int mn = INT_MAX;
    for (int i = 0; i < m - n + 1; i++) {
        if (mn > v[i + n - 1] - v[i])
            mn = v[i + n - 1] - v[i];
    }
    // 5 7 10 10 12 22
    // 0 1  2 3  4  5 
    
    cout << mn << ed;

    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;

    // while(t--) {
        solve();
    // }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)

