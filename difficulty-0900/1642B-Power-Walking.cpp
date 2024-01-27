#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    set<int> se;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;

        se.insert(x);
    }

    int mn = se.size();
    for (auto u : se)
        cout << mn << ' ';
    
    for (int i = mn; i < n; i++) 
        cout << ++mn << ' ';
    
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
    Monday, July 17, 2023 | 06:16:24 (UTC +06:00) Dhaka
*/