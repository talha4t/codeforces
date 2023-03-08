#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool solve() {
    
    int a, b; cin >> a >> b;

    int cB = 0, ctB = 0, cA = 0, ctA = 0;
    if (a > b) {
        for (int i = 1; i <= a + b; i++) {
            if (i % 2 and ctB < b) {
                cout << '1';
                ctB++;
            }
            else 
                cout << '0';
        }
    }

    else {
        for (int i = 1; i <= a + b; i++) {
            if (i % 2 and ctA < a) {
                cout << '0';
                ctA++;
            }
            else 
                cout << '1';
        }
    }

    cout << ed;
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
