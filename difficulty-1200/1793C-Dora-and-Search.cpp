#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int &i : v)
        cin >> i;

    int mn = 1, mx = n, l = 0, r = n - 1;
    while(l <= r) {
        if (v[l] == mn)
            mn++, l++;
        else if (v[l] == mx)
            mx--, l++;
        else if (v[r] == mn)
            mn++, r--;
        else if (v[r] == mx)
            mx--, r--;
        else
            break;
    }
     
    if (l > r)
        cout << -1;
    else
        cout << l + 1 << ' ' << r + 1;

    cout << '\n';

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
    Tuesday, February 13, 2024 | 17:54:53 (UTC +06:00) Dhaka
*/