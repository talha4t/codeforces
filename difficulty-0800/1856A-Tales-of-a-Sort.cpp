#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    int ans = 0;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        v.push_back(x);
    }

    for (int i = 0; i < n - 1; i++ ) {
        if (v[i] > v[i + 1])
            ans = max(ans, v[i]);
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
    Saturday, August 05, 2023 | 20:35:32 (UTC +06:00) Dhaka
*/