#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first)
        return a.second < b.second;
    
    return a.first > b.first;
}

bool solve() {
    
    int n, k; cin >> n >> k;

    vector<int> a;
    vector<pair<int, int>> b;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        if (x % k == 0)
            a.push_back(i + 1);
        else
            b.push_back({(x % k), (i + 1)});
    }

    for (auto u : a)
        cout << u << ' ';
    
    sort(b.begin(), b.end(), cmp);
    for (auto u : b)
        cout << u.second << ' ';
    
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
    Friday, July 28, 2023 | 07:52:31 (UTC +06:00) Dhaka
*/