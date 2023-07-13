#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, m; cin >> n >> m;

    ll sum1 = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        sum1 += x;
    }

    ll sum2 = 0;
    for (int i = 0; i < m; i++) {
        int x; cin >> x;

        sum2 += x;
    }

    if (sum1 == sum2)
        cout << "Draw\n";
    else if (sum1 > sum2)
        cout << "Tsondu\n";
    else
        cout << "Tenzing\n";

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
    Saturday, June 24, 2023 | 20:09:54 (UTC +06:00) Dhaka
*/