#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, m; cin >> n >> m;

    vector<int> a(n), b(m);
    for (int &i : a)
        cin >> i;
    for (int &i : b)
        cin >> i;
    
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());

    ll ans = 0;
    int r = m - 1, l = 0, i = 0, j = n - 1;
    while(i <= j) {
        int left = abs(a[i] - b[l]);
        int right = abs(a[j] - b[r]);

        int mx = max(left, right);
        ans += mx;

        if (left == mx)
            i++, l++;
        else
            j--, r--;
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
    Thursday, January 25, 2024 | 04:16:54 (UTC +06:00) Dhaka
*/