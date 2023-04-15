#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int s; cin >> s;

    int ans = 0, d, p;

    while(true) {
        d = (s / 10) * 10;
        ans += d;
        p = s - d;
        s = (s / 10) + p;

        if (s < 10) {
            ans += s;
            break;
        }
    }

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
    Saturday, April 15, 2023 | 11:39:58 (UTC +06:00) Dhaka
*/