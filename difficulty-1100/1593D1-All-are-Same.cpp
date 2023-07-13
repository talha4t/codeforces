#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    if (v[0] == v[n - 1])
        cout << -1 << ed;
    else {
        int ans = abs(v[0] - v[1]);

        for (int i = 1; i < n - 1; i++)
            ans = __gcd(ans, abs(v[i] - v[i + 1]));

        cout << ans << ed;
    }
    
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
    Thursday, April 20, 2023 | 11:03:10 (UTC +06:00) Dhaka
*/