#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    if (n % 2) {

        int op = (n + 1) / 2;
        cout << op << ed;

        int c = 0;
        for (int i = 1, j = n * 3; i <= n * 3; i += 3, j -= 3) {
            cout << i << ' ' << j << ed;
            c++;
            if (c == op)    
                break;
        }

    }
    else {
        int op = n / 2;
        cout << op << ed;

        int c = 0;
        for (int i = 1, j = n * 3; i <= n * 3; i += 3, j -= 3) {
            cout << i << ' ' << j << ed;
            c++;
            if (c == op)
                break;
        }
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
