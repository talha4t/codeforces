#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int x, y, n; 
    cin >> x >> y >> n;

    
    int a[n], ok = 1;
    for (int i = n - 1, j = 0; i >= 0; i--, j++) {
        a[i] = (y - j);
        y = (y - j);

    }

    if (a[0] < x)
        cout << -1 << '\n';
    else {
        cout << x << ' ';
        for (int i = 1; i < n; i++)
            cout << a[i] << ' ';
        
        cout << '\n';
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
    Saturday, August 26, 2023 | 20:35:33 (UTC +06:00) Dhaka
*/