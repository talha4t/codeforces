#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = max(ans, v[i] - (i + 1));
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
    Wednesday, April 12, 2023 | 12:03:23 (UTC +06:00) Dhaka
*/