#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int dif = (y2 - y1) - (x2 - x1);
    if (dif < 0 or y2 < y1)
        cout << -1;
    else
        cout << dif + (y2 - y1);

    cout << '\n';

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
    Thursday, October 19, 2023 | 22:22:24 (UTC +06:00) Dhaka
*/