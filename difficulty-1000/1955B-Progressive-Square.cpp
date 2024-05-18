#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, c, d;
    cin >> n >> c >> d;

    vector<int> b(n * n), a, row;
    for (int i = 0; i < n * n; i++)
        cin >> b[i];

    sort(b.begin(), b.end());
    
    int track = b[0], cnt = 0;
    row.push_back(track);
    for (int i = 1; i <= n * n; i++) {
        row.push_back(track + c);

        track += c;
    } 

    for (int i = 0; i < n; i++) {

        int cur = row[i];
        a.push_back(cur);
        for (int j = 1; j < n; j++) {
            cur += d;

            a.push_back(cur);
        }
    }

    sort(a.begin(), a.end());
    
    cout << (a == b ? "YES" : "NO") << '\n';

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
    Saturday, May 18, 2024 | 13:09:02 (UTC +06:00) Dhaka
*/