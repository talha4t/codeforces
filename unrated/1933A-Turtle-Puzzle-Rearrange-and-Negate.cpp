#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;

        if (x < 0)
            x = -1 * x;

        ans += x;
    }

    cout << ans << '\n';
    
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

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Tuesday, February 27, 2024 | 20:35:08 (UTC +06:00) Dhaka
*/