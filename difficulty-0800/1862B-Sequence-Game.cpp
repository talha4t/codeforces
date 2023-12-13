#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    int n; cin >> n;

    int b[n];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    
    vector<int> a;
    a.push_back(b[0]);
    for (int i = 1; i < n; i++) {
        if (b[i - 1] <= b[i])
            a.push_back(b[i]);
        else {
            a.push_back(b[i]);
            a.push_back(b[i]);
        }
    }

    cout << (int)a.size() << '\n';
    for (auto u : a)
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
    Saturday, August 26, 2023 | 07:32:36 (UTC +06:00) Dhaka
*/