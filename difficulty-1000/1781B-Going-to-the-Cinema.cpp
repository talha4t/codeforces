#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    sort(a.begin() + 1, a.end());
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] < i and (i == n or a[i + 1] > i))
            ans++;
    }

    if (a[1] != 0)
        ans++;

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
    Saturday, October 21, 2023 | 21:24:57 (UTC +06:00) Dhaka
*/