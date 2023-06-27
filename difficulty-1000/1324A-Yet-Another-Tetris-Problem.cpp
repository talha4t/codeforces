#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    int e = 0, o = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        if (x & 1)
            o++;
        else
            e++;
    }

    if (e == n or o == n)
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
    Tuesday, June 27, 2023 | 08:28:51 (UTC +06:00) Dhaka
*/