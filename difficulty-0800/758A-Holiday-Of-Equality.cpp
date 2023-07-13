#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    int mx = v[n - 1];

    ll ans = 0;
    for (int i = 0; i < n - 1; i++) 
        ans = ans + (mx - v[i]);

    cout << ans << ed;
    
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Friday, April 21, 2023 | 20:55:36 (UTC +06:00) Dhaka
*/