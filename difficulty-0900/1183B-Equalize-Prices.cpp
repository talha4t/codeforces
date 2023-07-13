#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    int n, k; cin >> n >> k;

    int mn = INT_MAX;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];

        mn = min(mn, v[i]);
    } 

    int res = mn + k;

    bool ok = true;
    for (int i = 0; i < n; i++) {
        if (abs(res - v[i]) > k)
            ok = false;
    }

    if (ok)
        cout << res << ed;
    else
        cout << -1 << ed;
    return true;
}

int main() {
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
