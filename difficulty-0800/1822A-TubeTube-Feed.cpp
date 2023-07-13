#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n, t; cin >> n >> t;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];

    
    int ans = 0, mx = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] <= t) {
            if (b[i] > mx) {
                ans = i + 1;
                mx = b[i];
            }
        }
        t--;
    }   

    if (ans == 0)
        cout << -1 << ed;
    else
        cout << ans << ed;

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    while(q--) {
        solve();
    }
    
    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Monday, April 24, 2023 | 20:35:07 (UTC +06:00) Dhaka
*/