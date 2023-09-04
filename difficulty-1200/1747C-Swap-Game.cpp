#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    int mn = INT_MAX;
    for (int i = 1; i < n; i++)
        mn = min(v[i], mn);
    
    if (mn < v[0])
        cout << "Alice\n";
    else
        cout << "Bob\n";
        
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
    Monday, September 04, 2023 | 11:41:43 (UTC +06:00) Dhaka
*/