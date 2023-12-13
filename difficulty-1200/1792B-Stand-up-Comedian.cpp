#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    if (a1 == 0)
        cout << 1;
    else
        cout << a1 + min(a2, a3) * 2 + min(a1 + 1, abs(a2 - a3) + a4);

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
    Friday, September 29, 2023 | 11:44:53 (UTC +06:00) Dhaka
*/