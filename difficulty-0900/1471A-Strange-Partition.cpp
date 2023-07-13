#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n, x, a, b; cin >> n >> x;

    vector<int> v(n);

    ll sum = 0, sum2 = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];

        sum += v[i];

        sum2 += ceil(1.0 * v[i] / x);
    }

    sum = ceil(1.0 * sum / x);

    cout << min(sum, sum2) << ' ' << max(sum, sum2) << ed;

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
    Friday, April 14, 2023 | 19:50:47 (UTC +06:00) Dhaka
*/