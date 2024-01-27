#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b >= 10)
        cout << "YES\n";
    else if (b + c >= 10)
        cout << "YES\n";
    else if (a + c >= 10)
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
    Friday, July 21, 2023 | 20:35:38 (UTC +06:00) Dhaka
*/