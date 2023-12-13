#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    int a[n + 1];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    if (n == 1)
        cout << 1 << '\n';
    else {
        int sum = a[0], ans = 0;
        for (int i = 0; i < n; i++) {
            sum &= a[i];

            if (sum == 0) {
                ans++;

                sum = (i + 1 < n ? a[i + 1] : 0);
            }
        }

        if (!ans)
            cout << 1 << '\n';
        else
            cout << ans << '\n';
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
    Wednesday, August 30, 2023 | 13:03:52 (UTC +06:00) Dhaka
*/