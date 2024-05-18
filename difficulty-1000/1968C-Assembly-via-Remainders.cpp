#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n - 1);
    for (int &i : v)
        cin >> i;

    reverse(v.begin(), v.end());

    vector<int> ans;
    int maxValue = 250007;
    for (int i = 0; i < n - 1; i++) {
        int store = (maxValue - v[i]);

        ans.push_back(store);

        maxValue = store;
    }

    reverse(ans.begin(), ans.end());
    for (auto u : ans)
        cout << u << ' ';

    maxValue = 250007;

    cout << maxValue << '\n';

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
    Saturday, May 18, 2024 | 03:20:32 (UTC +06:00) Dhaka
*/