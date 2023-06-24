#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, x; cin >> n >> x;

    int res = 0;
    for (int i = 0; i < 3; i++) {
        bool ok = true;

        for (int i = 0; i < n; i++) {
            int a; cin >> a;

            if ((a & x) != a)
                ok = false;
            if (ok)
                res |= a;
        }
    }

    if (res == x)
        cout << "Yes\n";
    else
        cout << "No\n";

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
    Saturday, June 24, 2023 | 23:32:59 (UTC +06:00) Dhaka
*/