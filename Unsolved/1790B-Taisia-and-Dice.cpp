#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n, s, r;
    cin >> n >> s >> r;

    int mx = s - r;

    for (int i = 1; i <= n - 2; i++)
        cout << 1 << ' ';

    cout << r - (n - 2) << ' ' << mx << ed;

    
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
