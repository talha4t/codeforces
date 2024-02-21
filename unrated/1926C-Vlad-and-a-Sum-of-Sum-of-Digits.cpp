#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
const int N = 1e6 + 7;
ll ans[N];

bool solve() {
    
    int n; cin >> n;

    cout << ans[n] << '\n';

    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 1; i < N; i++) {
        int cur = i;
        while(cur > 0) {
            ans[i] += cur % 10;
            
            cur /= 10;
        }
        ans[i] += ans[i - 1];
    }

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
    Wednesday, February 21, 2024 | 15:49:40 (UTC +06:00) Dhaka
*/