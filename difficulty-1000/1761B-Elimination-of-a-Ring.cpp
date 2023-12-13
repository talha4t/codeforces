#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> a(n);
    for (int &i : a)
        cin >> i;
    
    int pr = 0;
    for (int i = 1; i < n - 1; i++) {
        if (a[i - 1] == a[i + 1])
            pr++;
    }

    int ans = 1;
    if ((pr + 2 == n) and n != 1)
        ans = (pr / 2) + 2;
    else if (n > 1)
        ans = n;

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
    Thursday, September 28, 2023 | 18:39:12 (UTC +06:00) Dhaka
*/