
#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    ll n, k, b, s;
    cin >> n >> k >> b >> s;


    if (s < (k * b) or s > (k * b) + n * (k - 1))
        cout << -1 << ed;

    else {
        vector<ll> v(n);

        ll a[n + 7];
        
        memset(a, 0, sizeof(a));

        a[0] = (k * b);
        s -= (k * b);
        for (int i = 0; i < n; i++) {
            ll tmp = min(s, k - 1);
            a[i] += tmp;

            s -= tmp;
        }

        cerr << a[0] << ed;
        for (int i = 0; i < n; i++)
            cout << a[i] << ' ';
        
        cout << ed;
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
    Friday, April 07, 2023 | 15:29:12
*/