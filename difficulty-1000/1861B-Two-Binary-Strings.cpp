#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    string a, b; cin >> a >> b;

    int sz = a.size();

    int ok = 0;
    for (int i = 0; i < sz - 1; i++) {
        if (a[i] == '0' and b[i] == '0' and a[i + 1] == '1' and b[i + 1] == '1')
            ok = 1;
    }

    if (a == b)
        cout << "YES\n";
    else if (a != b and sz == 2)
        cout << "NO\n";
    else if (sz == 3) {
        if (a[1] == b[1])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    else if (ok)
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
    Thursday, August 31, 2023 | 21:14:38 (UTC +06:00) Dhaka
*/