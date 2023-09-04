#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    int first_val; cin >> first_val;

    int mn = INT_MAX;
    for (int i = 1; i < n; i++) {
        int x; cin >> x;

        mn = min(mn, x);
    }
    
    
    if (mn < first_val)
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