#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, q; cin >> n >> q;

    vector<int> a(n + 1), p(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    sort(a.begin() + 1, a.end());
    reverse(a.begin() + 1, a.end());
    
    for (int i = 1; i <= n; i++)
        p[i] = p[i - 1] + a[i];

    while(q--) {
        int x; cin >> x;
        
        int l = 1, r = n;
        while(r - l > 1) {
            int mid = (r + l) >> 1;

            if (p[mid] < x)
                l = mid + 1;
            else
                r = mid;
        }
        if (p[l] >= x)
            cout << l << '\n';
        else if (p[r] >= x)
            cout << r << '\n';
        else
            cout << -1 << '\n';
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
    Saturday, September 16, 2023 | 16:19:53 (UTC +06:00) Dhaka
*/