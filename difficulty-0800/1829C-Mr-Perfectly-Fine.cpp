#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    int a = 100000000, b = 100000000, c = 100000000;

    for (int i = 1; i <= n; i++) {
        int x; string s; cin >> x >> s;

        if (s == "11")
            c = min(c, x);
        else if (s == "01")
            b = min(b, x);
        else if (s == "10")
            a = min(a, x);
    }
    
    int ans = min(c, a + b);

    if (ans >= 100000000)
        ans = -1;
    
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
    Saturday, May 06, 2023 | 20:38:17 (UTC +06:00) Dhaka
*/