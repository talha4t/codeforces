#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, k; cin >> n >> k;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        v.push_back(x);
    }

    sort(v.begin(), v.end());

    int ans = 0, mx = INT_MIN;
    for (int i = 1; i < n; i++) {
        if (abs(v[i] - v[i - 1] <= k)) {
            ans++;
        }
        else
            ans = 0;
        
        mx = max(ans, mx);
    }

    if (mx < 0)
        cout << 0 << '\n';
    else
        cout << (n - (mx + 1)) << '\n';

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
    Friday, July 21, 2023 | 20:54:32 (UTC +06:00) Dhaka
*/
