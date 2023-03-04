#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {

    int n; cin >> n;

    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        if (x == 100)
            a++;
        else 
            b++;
    }

    if (a % 2)
        cout << "NO" << ed;
    else if (a == 0 and b % 2)
        cout << "NO" << ed;
    else 
        cout << "YES" << ed;

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
