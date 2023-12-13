#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool solve() {
    
    int n; cin >> n;

    if (n % 2) {
        int cur = (n - 1) / 2;

        if (cur % 2)
            cout << cur + 2 << ' ' << cur - 2 << ' ' << 1 << ed;
        else 
            cout << cur + 1 << ' ' << cur - 1 << ' ' << 1 << ed;
    }
    else {
        n /= 2;

        cout << n << ' ' << n - 1 << ' ' << 1 << ed;
    }

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
