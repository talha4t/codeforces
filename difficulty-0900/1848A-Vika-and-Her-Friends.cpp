#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, m, k;
    cin >> n >> m >> k;

    int x, y; cin >> x >> y;
    int p = (x + y) % 2;

    bool ok = true;
    for (int i = 1; i <= k; i++) {
        int a, b; cin >> a >> b;

        if ((a + b) % 2 == p)
            ok = false;
    }

    if (ok)
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
    Monday, July 17, 2023 | 00:02:55 (UTC +06:00) Dhaka
*/