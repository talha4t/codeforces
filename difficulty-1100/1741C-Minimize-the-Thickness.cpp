#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int &i : v)
        cin >> i;

    int mn_seg_len = n;
    for (int i = 1; i <= n; i++) {
        int sum = 0;
        for (int j = 0; j < i; j++)
            sum += v[j];
        
        int seg_cnt = 0, seg_sum = 0, mx = i;
        for (int j = i; j < n; j++) {
            seg_sum += v[j], seg_cnt++;

            if (sum == seg_sum) {
                mx = max(mx, seg_cnt);
                seg_sum = 0, seg_cnt = 0;
            }
        }

        if (seg_sum == 0)
            mn_seg_len = min(mx, mn_seg_len);

    }

    cout << mn_seg_len << '\n';

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
    Monday, February 05, 2024 | 11:22:27 (UTC +06:00) Dhaka
*/