#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        v.push_back({x, i});
    }

    sort(v.rbegin(), v.rend());

    int k = 1;
    vector<int> a(n);
    for (auto u : v) {
        a[u.second] = k;
        k++;
    }

    for (int i = 0; i < a.size(); i++)
        cout << a[i] << ' ';

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
    Monday, September 11, 2023 | 20:37:06 (UTC +06:00) Dhaka
*/