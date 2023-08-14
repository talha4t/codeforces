#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

const int MAX = 100;
int a[MAX][MAX];

bool solve() {
    int n; cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++)
            cin >> a[i][j];
    }

    int f = 0, s = 0;
    for (int i = 0; i < n; i++) {
        if (a[i][0] == a[0][0])
            f++;
        else if (a[i][0] == a[1][0])
            s++;
    }
    
    int mx = 0;
    if (f > s)
        mx = a[0][0];
    else
        mx = a[1][0];

    cout << mx << ' ';

    for (int i = 0; i < n; i++) {
        if (mx != a[i][0]) {
            for (int j = 0; j < n - 1; j++)
                cout << a[i][j] << ' ';
        }
    }

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
    Monday, August 14, 2023 | 16:37:28 (UTC +06:00) Dhaka
*/