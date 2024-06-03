#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, f, k;
    cin >> n >> f >> k;

    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    
    int val = a[f - 1];
    sort(a.rbegin(), a.rend());

    if (k == n || a[k] < val)
        cout << "YES";
    else if (a[k - 1] <= val)
        cout << "MAYBE";
    else
        cout << "NO";

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
    Monday, June 03, 2024 | 22:02:21 (UTC +06:00) Dhaka
*/