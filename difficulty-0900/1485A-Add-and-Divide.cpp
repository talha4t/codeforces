#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int a, b; cin >> a >> b;

    int ct = 0, ans = INT_MAX;
    for (int i = 0; i * i <= a; i++) {
        if (b == 1 and i == 0)
            continue;

        ct = i;
        int c = a;
        while(c) {
            c /= (b + i);
            ct++;
        }

        ans = min(ans, ct);
        cerr << ans << ed;
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
    Monday, April 10, 2023 | 08:46:12 (UTC +06:00) Dhaka
*/