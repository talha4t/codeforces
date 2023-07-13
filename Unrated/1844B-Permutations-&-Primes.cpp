#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    if (n == 1)
        cout << 1 << '\n';
    else if (n == 2) 
        cout << 2 << ' ' << 1 << '\n';
    else {
        int a[n];
        for (int i = 0; i < n; i++) 
            a[i] = 0;
        
        a[n / 2] = 1;
        a[0] = 2;
        a[n - 1] = 3;

        int cnt = 4;
        for (int i = 0; i < n; i++) {
            if (a[i] == 0)
                a[i] = cnt++;
        }

        for (auto u : a)
            cout << u << ' ';
        
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
    Wednesday, July 12, 2023 | 09:43:29 (UTC +06:00) Dhaka
*/