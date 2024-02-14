#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, c; cin >> n >> c;

    ll sum = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];

        v[i] += (i + 1);
    }

    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
        if (sum > c)
            break;
        ans++;
    }

    cout << ans << '\n';
    
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
    Wednesday, February 14, 2024 | 21:14:38 (UTC +06:00) Dhaka
*/