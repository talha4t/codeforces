#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> even, odd;
    for (int i = 0; i < n; i++) {
        if (v[i] & 1)
            odd.push_back(v[i]);
        else
            even.push_back(v[i]);
    }
    if (is_sorted(even.begin(), even.end()) and is_sorted(odd.begin(), odd.end()) )
        cout << "YES\n";
    else
        cout << "NO\n";

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
    Thursday, September 14, 2023 | 22:50:12 (UTC +06:00) Dhaka
*/