#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll sum_a = 0, sum_b = 0;
    for (int i = 0; i < n; i++)
        sum_a += a[i];
    for (int i = 0; i < n; i++)
        sum_b += b[i];
    
    sum_a += (1LL * b[0] * n);
    sum_b += (1LL * a[0] * n);

    cout << min(sum_a, sum_b) << '\n';

    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int cs = 1; cs <= t; cs++){
        solve();
    }
    
    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Sunday, September 24, 2023 | 20:49:28 (UTC +06:00) Dhaka
*/