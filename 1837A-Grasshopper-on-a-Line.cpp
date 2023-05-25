#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {

    int n, k; cin >> n >> k;

    if (n % k) {
        cout << 1 << '\n';
        cout << n << '\n';
    }
    else {
        --n;

        cout << 2 << '\n';
        cout << n << ' ' << 1 << '\n';
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
    Thursday, May 25, 2023 | 20:39:49 (UTC +06:00) Dhaka
*/