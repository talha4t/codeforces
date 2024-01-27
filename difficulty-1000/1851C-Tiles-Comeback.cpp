#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, k; cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int t0 = 0, tn = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == a[0])
            t0++;
        
        if (a[i] == a[n - 1] and t0 >= k)
            tn++;
    }

    if (tn >= k or (a[0] == a[n - 1] and t0 >= k))
        cout << "YES\n";
    else
        cout << "NO\n";

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
    Wednesday, July 26, 2023 | 11:28:04 (UTC +06:00) Dhaka
*/