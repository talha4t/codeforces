#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    ll ans = (a[0] - 1), cnt = 2;
    for (int i = 1; i < n; i++) {
        if (cnt > a[i])
            b[i] = a[i];
        else {
            b[i] = cnt;
            cnt++;
        }
    }

    for (int i = 1; i < n; i++)
        ans += (a[i] - b[i]);

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
    Sunday, September 17, 2023 | 17:54:48 (UTC +06:00) Dhaka
*/