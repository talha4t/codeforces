#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    bool ok = true;
    vector<int> v(n + 1);
    int first = -1, last = -1;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        
        v[i] = x;

        if (x == 1 and ok) {
            first = i;
            ok = false;
        }

        if (!ok and x == 1)
            last = i;
    }

    if (first == last)
        cout << 0;
    else {
        int ans = 0;
        for (int i = first; i <= last; i++) {
            if (v[i] == 0)
                ans++;
        }

        cout << ans;
    }

    cout << '\n';

    // 0 1 1 1 1 1 0 0
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
    Friday, February 23, 2024 | 20:35:12 (UTC +06:00) Dhaka
*/