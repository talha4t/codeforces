#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    pair<int, int> ab[n];
    for (int i = 0; i < n; i++)
        cin >> ab[i].first;

    for (int i = 0; i < n; i++)
        cin >> ab[i].second;

    sort(ab, ab + n);
    for (int i = 0; i < n; i++)
        cout << ab[i].first << ' ';

    cout << '\n';
    
    for (int i = 0; i < n; i++)
        cout << ab[i].second << ' ';

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
    Sunday, March 17, 2024 | 16:21:04 (UTC +06:00) Dhaka
*/