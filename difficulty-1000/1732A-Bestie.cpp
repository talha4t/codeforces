#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n + 1);
    int g = 0;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];

        g = __gcd(v[i], g);
    }

    int ans = 0;
    if (g > 1) {
        if (__gcd(g, n) == 1)
            ans = 1;
        else if (__gcd(g, n - 1) == 1)
            ans = 2;
        else
            ans = 3;
    }

    cout << ans << '\n';

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
    Sunday, September 17, 2023 | 07:41:03 (UTC +06:00) Dhaka
*/