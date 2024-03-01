#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    sort(a.begin(), a.end());

    vector<int> v;
    v.push_back(a[n - 1]);
    v.push_back(a[1]);
    v.push_back(a[n - 2]);
    v.push_back(a[0]);

    int ans = 0;
    ans += abs(v[0] - v[1]);
    ans += abs(v[1] - v[2]);
    ans += abs(v[2] - v[3]);
    ans += abs(v[3] - v[0]);

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
    Friday, March 01, 2024 | 20:38:22 (UTC +06:00) Dhaka
*/