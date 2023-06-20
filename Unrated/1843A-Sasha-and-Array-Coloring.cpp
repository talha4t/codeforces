#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    sort(v.begin(), v.end());

    int ans = 0;
    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
        ans += abs(v[i] - v[j]);

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
    Wednesday, June 21, 2023 | 00:48:36 (UTC +06:00) Dhaka
*/