#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (auto &i : v)
        cin >> i;

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += v[i];

        if (ans < 0)
            ans = 0;
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
    Sunday, October 29, 2023 | 23:39:16 (UTC +06:00) Dhaka
*/