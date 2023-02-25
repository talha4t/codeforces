#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {

    int n; cin >> n;

    ll sum = 0;

    vector<int> v(n + 2);

    v[0] = 0;
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    v[n + 1] = 1440;

    int ct_240 = 0, ct_120 = 0;
    for (int i = 1; i < n + 2; i++) {
        if (v[i] - v[i - 1] >= 240) {
            ct_240++;
            break;
        }
        else if (v[i] - v[i - 1] >= 120)
            ct_120++;
    }

    if (ct_240)
        cout << "YES" << ed;
    else {
        if (ct_120 >= 2)
            cout << "YES" << ed;
        else 
            cout << "NO" << ed;
    }

    

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