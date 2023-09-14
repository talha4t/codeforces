#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool isPrime(int n) {
    if (n <= 2)
        return false;
    
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

bool solve() {
    
    int l, r; cin >> l >> r;

    if (l >= 1 and r <= 3)
        cout << -1 << '\n';
    else if (l == r) {

        if (isPrime(r))
            cout << -1 << '\n';
        else if (r & 1) {
            if (r < 15)
                cout << 6 << ' ' << 3 << '\n';
            else {
                for (int i = 3; ; i++) {
                    if (r % i == 0) {
                        cout << (r - i) << ' ' << i << '\n';

                        return true;
                    }
                }
            }
        }
        else
            cout << (r / 2) << ' ' << (r / 2) << '\n';
    }
    else {
        if (r & 1)
            cout << (r - 1) / 2 << ' ' << (r - 1) / 2 << '\n';
        else
            cout << r / 2 << ' ' << r / 2 << '\n'; 
    }

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
    Friday, September 08, 2023 | 09:59:19 (UTC +06:00) Dhaka
*/