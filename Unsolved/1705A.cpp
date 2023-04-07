#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool solve() {
    int n, x; cin >> n >> x;

    vector<int> a(2 * n);
    for (int i = 0; i < 2 * n; i++)
        cin >> a[i];
    

    sort(a.begin(), a.end());

    int ct = 0, c = 0;

    bool ok = true;
    for (int i = 0, j = n; i < n; i++, j--) {
        if (abs(a[i] - a[j]) < x) {
            ok = false;
            break;
        }
    }

    if (ok)
        cout << "YES" << ed;
    else 
        cout << "NO" << ed;

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
