#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, k, x;
    cin >> n >> k >> x;

    if (x != 1) {
        cout << "YES\n";
        cout << n << '\n';
        for (int i = 1; i <= n; i++)
            cout << 1 << ' ';
        
        cout << '\n';
    }
    else {
        if (n % 2 == 0) {
            if (k < 2)
                cout << "NO\n";
            else {
                cout << "YES\n";
                cout << n / 2 << '\n';
                for (int i = 1; i <= n; i += 2)
                    cout << 2 << ' ';
                
                cout << '\n';
            }
        }
        else if (n == 1)
            cout << "NO\n";
        else {
            if (k < 3)
                cout << "NO\n";
            else {
                cout << "YES\n";
                n -= 3;
                cout << (n / 2) + 1 << '\n';
                for (int i = 1; i <= n; i += 2)
                    cout << 2 << ' ';

                cout << 3;

                cout << '\n';
            }
        }
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
    Thursday, June 29, 2023 | 23:04:42 (UTC +06:00) Dhaka
*/