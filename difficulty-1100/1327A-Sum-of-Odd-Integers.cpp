#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {

    int n, k; cin >> n >> k;

    if ((((n & 1) and (k & 1)) or (!(n & 1) and !(k & 1))) and (ll)k * k <= n)
        cout << "YES" << ed;
    else
        cout << "NO" << ed;

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
    Friday, April 28, 2023 | 10:40:53 (UTC +06:00) Dhaka
*/