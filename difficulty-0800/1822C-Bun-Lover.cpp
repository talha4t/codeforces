#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n;
    cin >> n;

    ll ans = (1LL * (n + 1) * (n + 1)) + 1;

    cout << ans << ed;
    
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
    Tuesday, April 25, 2023 | 08:13:23 (UTC +06:00) Dhaka
*/