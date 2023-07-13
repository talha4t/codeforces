#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, l, r, k;
    cin >> n >> l >> r >> k;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        if (x >= l and x <= r)
            v.push_back(x);
    }

    sort(v.begin(), v.end());

    int ans = 0, cnt = 0;
    for (int i = 0; i < v.size(); i++) {
        if (cnt + v[i] <= k) {
            cnt += v[i];
            ans++;
        }
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
    Saturday, May 20, 2023 | 21:55:53 (UTC +06:00) Dhaka
*/