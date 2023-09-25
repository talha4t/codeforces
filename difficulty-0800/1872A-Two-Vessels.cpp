#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int a, b, c; 
    cin >> a >> b >> c;

    if (a == b)
        cout << 0 << '\n';
    else {
        int ans = 0, x = a, y = b;
        while(true) {
            if (a >= b) {
                x -= c;
                y += c;

                ans++;

                if (x <= y) {
                    cout << ans << '\n';
                    
                    return true;
                }
            }
            else {
                y -= c;
                x += c;

                ans++;

                if (x >= y) {
                    cout << ans << '\n';
                    
                    return true;
                }
            }
        }
        
        cout << ans << '\n';
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
    Thursday, September 07, 2023 | 20:36:16 (UTC +06:00) Dhaka
*/