#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n, m; cin >> n >> m;
    int x, y; cin >> x >> y;

    char sq[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cin >> sq[i][j];
    }

    ll tot = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (sq[i][j] == '.' and j + 1 < m and  sq[i][j + 1] == '.') {
                tot += min(2 * x, y);
                j++;
            }
            else if (sq[i][j] == '.')
                tot += x;
        }
    }

    cout << tot << ed;

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
