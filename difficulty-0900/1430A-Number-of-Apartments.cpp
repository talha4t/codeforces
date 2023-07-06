#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    if (n == 1 or n == 2 or n == 4) {
        cout << -1 << '\n';
        return true;
    }

    if (n % 3 == 0)
        cout << n / 3 << ' ' << 0 << ' ' << 0 << '\n';
    else if (n % 3 == 1)
        cout << (n - 7) / 3 << ' ' << 0 << ' ' << 1 << '\n';
    else 
        cout << (n - 5) / 3 << ' ' << 1 << ' ' << 0 << '\n';
    
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
    Wednesday, July 05, 2023 | 22:50:37 (UTC +06:00) Dhaka
*/