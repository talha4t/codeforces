#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool solve() {
    
    int n, k; cin >> n >> k;

    if (k <= 1) {
        for (int i = 1; i <= n; i++)
            cout << i << ' ';
        
        cout << ed;
    }
    else {
        if (n % 2) {
            int f = 0, ct = 0;
            for (int i = 1, j = n; i <= (n + 1) / 2; ) {
                if (ct == n)
                    break;
                if (f == 0) {
                    ct++;
                    cout << j << ' ';
                    j--;
                    f = 1;
                }
                else {
                    ct++;
                    cout << i << ' ';
                    i++;
                    f = 0;
                }

            }
            cout << ed;
        }
        else {
            for (int i = 1, j = n; i <= n / 2; i++, j--)
                cout << j << ' ' << i << ' ';

            cout << ed;
        }
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
