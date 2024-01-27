#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, k, a, b;
    cin >> n >> k >> a >> b;

    vector<int> x(n + 1), y(n + 1);
    for (int i = 1; i <= n; i++) {
        int x1, y1; cin >> x1 >> y1;

        x[i] = x1;
        y[i] = y1;
    }

    ll possible_cost = 1LL * abs(x[a] - x[b]) + abs(y[a] - y[b]);
    ll for_a = LLONG_MAX / 2, for_b = LLONG_MAX / 2;
    for (int i = 1; i <= k; i++) {
        for_a = min(for_a, 1LL * abs(x[a] - x[i]) + abs(y[a] - y[i]));
        for_b = min(for_b, 1LL * abs(x[b] - x[i]) + abs(y[b] - y[i]));
    }

    cout << min((possible_cost), (for_a + for_b)) << '\n';

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
    Wednesday, September 27, 2023 | 22:42:22 (UTC +06:00) Dhaka
*/