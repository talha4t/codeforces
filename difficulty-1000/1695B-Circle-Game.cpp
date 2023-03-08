#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool solve() {
    
    int n; cin >> n;
    
    vector<int>v(n);
    for (int i = 0; i < n; i++) 
        cin >> v[i];

    if (n % 2)
        cout << "Mike" << ed;
    else  {
        int mn = 0, in = 0;
        for (int i = 0; i < n; i++) {
            if (v[mn] > v[i]) {
                mn = i;
            }
        }
        if (mn % 2 == 0)
            cout << "Joe" << ed;
        else
            cout << "Mike" << ed;
    }

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
