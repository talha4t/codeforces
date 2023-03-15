#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool solve() {
    
    int n; cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int m; cin >> m;

    vector<int> b(m);
    for (int i = 0; i < m; i++)
        cin >> b[i];


    int sum = 0, mx1 = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        mx1 = max(mx1, sum);
    }

    int mx2 = 0;
    sum = 0;
    for (int i = 0; i < m; i++) {
        sum += b[i];
        mx2 = max(mx2, sum);
    }

    cout << (mx1 + mx2) << ed;

    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
