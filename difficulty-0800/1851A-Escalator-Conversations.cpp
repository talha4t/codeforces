#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, m, k, h;
    cin >> n >> m >> k >> h;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        v.push_back(x);
    }

    int height_diff = -1, ans = 0;
    for (int i = 0; i < n; i++) {
        height_diff = abs(h - v[i]);

        for (int j = 1; j < m; j++) {
            if (k * j == height_diff) {
                ans++;
                break;
            }
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
    Tuesday, July 25, 2023 | 20:51:36 (UTC +06:00) Dhaka
*/
