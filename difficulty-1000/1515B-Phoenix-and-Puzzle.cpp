#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    int half = sqrt(n), quarter = sqrt(n / 2);
    if ((n % 2 == 0 && half * half == n) || (2 * quarter * quarter == n))
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
    Sunday, November 05, 2023 | 20:48:14 (UTC +06:00) Dhaka
*/