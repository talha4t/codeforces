#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, k; cin >> n >> k;

    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        a[i].first = x;
        a[i].second = i;
    }

    sort(a.begin(), a.end());

    vector<int> b(n);
    for (int i = 0; i < n; i++) 
        cin >> b[i];

    sort(b.begin(), b.end());

    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        ans[a[i].second] = b[i];
    }

    for (auto u : ans)
        cout << u << ' ';
    
    cout << '\n';
    
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
    Saturday, May 20, 2023 | 18:16:43 (UTC +06:00) Dhaka
*/