#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n, s, k;
    cin >> n >> s >> k;

    map<int, int> mp;
    for (int i = 0; i < k; i++) {
        int x; cin >> x;

        mp[x] = 1;
    }

    int ct = 0, ans = INT_MAX;
    for (int i = s; i <= n; i++) {
        if (!mp[i]) {
            ans = min(ans, ct);
            break;
        }

        ct++;
    }

    ct = 0;
    for (int i = s; i >= 1; i--) {
        if (!mp[i]) {
            ans = min(ans, ct);
            break;
        }

        ct++;
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
    Thursday, April 27, 2023 | 06:31:57 (UTC +06:00) Dhaka
*/