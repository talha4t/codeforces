#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;
    
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;

        if (a > b)
            ans++;
    }   

    cout << ans << '\n';

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
    Friday, July 07, 2023 | 20:34:59 (UTC +06:00) Dhaka
*/