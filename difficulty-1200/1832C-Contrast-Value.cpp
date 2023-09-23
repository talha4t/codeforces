#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> a(n);
    for (int &x : a)
        cin >> x;
        
    n = unique(a.begin(), a.end()) - a.begin();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n - 1 || (a[i] > a[i - 1] == a[i] > a[i + 1]))
            ans++;
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
    Friday, September 22, 2023 | 21:53:22 (UTC +06:00) Dhaka
*/