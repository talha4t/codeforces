#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n, m, x, y, d;
    cin >> n >> m >> x >> y >> d;

    int x1 = x - d, x2 = x + d;
    int y1 = y - d, y2 = y + d;

    if ((x1 <= 1 and x2 >= n) || (y1 <= 1 and y2 >= m) || (x1 <= 1 and y1 <= 1) || (x2 >= n and y2 >= m))
        cout << -1 << ed;
    else
        cout << n + m - 2 << ed;
         
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
