#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    if (n == 2 or n == 3 or n == 4)
        cout << "Bob\n";
    else
        cout << "Alice\n";
        
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
    Monday, June 12, 2023 | 22:14:38 (UTC +06:00) Dhaka
*/