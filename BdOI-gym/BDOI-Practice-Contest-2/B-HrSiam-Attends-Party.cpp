#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, b; cin >> n >> b;

    if (n > b)
        cout << 1;
    else {
        if (b % n == 0)
            cout << b / n;
        else
            cout << b / n + 1;
    }

    cout << '\n';

    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Saturday, February 03, 2024 | 20:00:30 (UTC +06:00) Dhaka
*/