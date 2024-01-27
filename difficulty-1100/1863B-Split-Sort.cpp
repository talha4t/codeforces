#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    int p[n];
    for (int i = 1; i <= n; i++)
        cin >> p[i];
    
    int indx[n];
    for (int i = 1; i <= n; i++)
        indx[p[i]] = i;
    
    int ans = 0;
    for (int i = 1; i < n; i++)
        ans += (indx[i + 1] < indx[i]);
    
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
    Thursday, August 31, 2023 | 10:08:07 (UTC +06:00) Dhaka
*/