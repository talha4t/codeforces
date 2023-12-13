#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool solve() {
    
    int n, m; cin >> n >> m;

    int a[n][m];

    int mx = INT_MIN, jj = 0, ii = 0, ct = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)  {
            cin >> a[i][j];

            if (mx < a[i][j]) {
                mx = a[i][j];
                jj = j;
                ii = i;
            }
        }
    }

    ll c1 = max(ii + 1, n - ii);
    ll c2 = max(jj + 1, m - jj);
    
    cout << c1 * c2 <<  ed;
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
