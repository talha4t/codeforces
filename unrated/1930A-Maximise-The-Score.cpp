#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(2 * n);
    for (int &i : v)
        cin >> i;
    
    sort(v.begin(), v.end());

    ll ans = 0;
    for (int i = 2 * n - 1; i > 0; i--) {
        int x = v[i];
        int y = v[i - 1];

        v.pop_back();
        v.pop_back();

        ans += min(x, y);
        
        v.push_back(ans);
        i--;
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
    Saturday, February 17, 2024 | 20:35:17 (UTC +06:00) Dhaka
*/