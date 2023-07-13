#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int a, b; cin >> a >> b;
    int c, d; cin >> c >> d;


    int mx1 = max(a, b);
    int mx2 = max(c, d);
    int mn1 = min(a, b);
    int mn2 = min(c, d);

    if ((mx1 == mx2) and (mn1 + mn2 == mx1))
        cout << "Yes" << ed;
    else
        cout << "No" << ed;
    
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
