#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    bool ok = true;
    for (int i = 2; i < n; i++) {
        if (v[i] % __gcd(v[i - 1], v[i + 1]))
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
    Tuesday, September 05, 2023 | 10:09:47 (UTC +06:00) Dhaka
*/