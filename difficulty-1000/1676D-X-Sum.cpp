#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n, m; cin >> n >> m;

    ll a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            ll sum = a[i][j];

            int x = i - 1, y = j - 1;
            while(x >= 0 and y >= 0) {
                sum += a[x][y];
                x--, y--;
            }
            x = i + 1, y = j + 1;
            while(x < n and y < m) {
                sum += a[x][y];
                x++, y++;
            }
            x = i + 1, y = j - 1;
            while(x < n and y >= 0) {
                sum += a[x][y];
                x++, y--;
            }
            x = i - 1, y = j + 1;
            while(x >= 0 and y < m) {
                sum += a[x][y];
                x--, y++;
            }
            ans =  max(sum, ans);
        }
    }

    cout << ans << ed;
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
