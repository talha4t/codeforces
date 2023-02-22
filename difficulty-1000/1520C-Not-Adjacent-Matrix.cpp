#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    int a[n][n];

    if (n == 1)
        cout << 1 << ed;
    else if (n == 2)
        cout << -1 << ed;
    else {
        // if n is Even
        if (n % 2 == 0) {
            int ct = 0;

            // first odd part
            for (int i = 1; i <= (n * n) - 1; i += 2) {
                cout << i << ' ';
                ct++;
                if (ct == n) {
                    cout << ed;
                    ct = 0;
                }
            }
            
            // second even part
            for (int i = 2; i <= (n * n); i += 2) {
                cout << i << ' ';
                ct++;
                if (ct == n) {
                    cout << ed;
                    ct = 0;
                }
            }
        }

        // if n is Odd
        else {
            int ct = 0;
            // first half
            for (int i = 1; i <= n * n; i += 2) {
                cout << i << ' ';

                ct++;
                if (ct == n) {
                    ct = 0;
                    cout << ed;
                }
            }

            int f = 0, fCt = 0, c = - n - ((n + 1) / 2);
            
            // second half
            for (int i = 2; i <= n * n; i += 2) {
                cout << i << ' ';
                
                c++;
                fCt++;
                if (f == 0 and n - ((n + 1) / 2) == fCt) {
                    cout << ed;
                    f = 1;
                }

                else if (ct == n) {
                    cout << ed;
                    ct = 0;
                }
            }
        }
        cout << ed;
    }
    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)

