#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    int x, n, m;
    cin >> x >> n >> m;

    while(x > 20 and n > 0) {
        x /= 2;
        x += 10;
        n--;
    }
    while(x >= 0 and m > 0) {
        x -= 10;
        m--;
    }

    if (x <= 0)
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
