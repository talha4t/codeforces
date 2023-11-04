#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<ll> a(n, 0);
    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        a[i] -= x;
    }

    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        a[i] += x;
    }

    sort(a.rbegin(), a.rend());

    int l = 0, r = n - 1, ans = 0;
    while(l < r) {
        if (a[l] >= 0 and a[r] >= 0) {
            ans++;
            l++, r--;
        }
        else if (a[l] < 0 and a[r] < 0)
            break;
        else if (a[l] >= 0) {
            if (a[l] >= abs(a[r])) {
                ans++;
                l++, r--;
            }
            else
                r--;
        }
    }
   
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
    Saturday, September 02, 2023 | 15:21:48 (UTC +06:00) Dhaka
*/