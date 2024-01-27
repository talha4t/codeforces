#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    string a, b, c;
    cin >> a >> b >> c;

    bool ok = false;
    for (int i = 0; i < n; i++) {
        if (a[i] == c[i] or b[i] == c[i]);
        else
            ok = true;
    }

    if (ok)
        cout << "YES";
    else
        cout << "NO";
    
    cout << '\n';
    
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
    Thursday, January 18, 2024 | 22:40:20 (UTC +06:00) Dhaka
*/