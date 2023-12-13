#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, k; cin >> n >> k;

    bool ok1 = false, ok2 = false;
    for (int i = 1; i <= n; i++) {
        int l, r; cin >> l >> r;

        if (k == l)
            ok1 = true;
        if (k == r)
            ok2 = true;
    }

    if (ok1 and ok2)
        cout << "YES\n";
    else
        cout << "NO\n";

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

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Saturday, October 21, 2023 | 09:16:59 (UTC +06:00) Dhaka
*/