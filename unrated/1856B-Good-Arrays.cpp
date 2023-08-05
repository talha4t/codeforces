#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    int cnt = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        if (x == 1)
            cnt++;

        sum += x;
    }

    if (cnt <= (sum - n) and n != 1)
        cout << "YES\n";
    else
        cout << "NO\n";

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
    Saturday, August 05, 2023 | 21:22:43 (UTC +06:00) Dhaka
*/