#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;

    if ((n * (a + b)) < (c - d) or (c + d) < (n * (a - b)))
        cout << "No\n";
    else
        cout << "Yes\n";
    
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
    Thursday, June 29, 2023 | 20:19:03 (UTC +06:00) Dhaka
*/