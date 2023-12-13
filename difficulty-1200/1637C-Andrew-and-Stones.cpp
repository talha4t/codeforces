#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> v[i];

    int one_cnt = 0;
    ll ans = 0;
    for (int i = 2; i < n; i++) {
        if (v[i] == 1)
            one_cnt++;

        ans += (v[i] + 1) / 2;
    }

    if (n - 2 == one_cnt or (n == 3 and (v[2] & 1)))
        ans = -1;
    
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
    Tuesday, September 05, 2023 | 16:21:22 (UTC +06:00) Dhaka
*/