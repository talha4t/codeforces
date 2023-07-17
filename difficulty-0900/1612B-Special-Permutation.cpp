#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, a, b;
    cin >> n >> a >> b;

    if ((a <= n / 2 and b > n / 2) or (b == n / 2 and a == n / 2 + 1)) {
        cout << a << ' ';
        for (int i = n; i; i--) {
            if (i != a and i != b)
                cout << i << ' ';
        }
        
        cout << b << '\n';
    }
    else 
        cout << -1 << '\n';

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
    Monday, July 17, 2023 | 08:36:18 (UTC +06:00) Dhaka
*/