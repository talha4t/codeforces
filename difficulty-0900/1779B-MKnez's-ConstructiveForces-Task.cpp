#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {

    int n; cin >> n;

    if (n == 3)
        cout << "NO" << ed;
    else if (n % 2){
        int a = ((n - 1) / 2) - 1;
        int b = a + 1;
        cout << "YES" << ed;
        for (int i = 1; i <= n; i++) {
            if (i % 2)
                cout << a << ' ';
            else 
                cout << -b << ' ';

        }
        cout << ed;
    }
    else {
        cout << "YES" << ed;
        
        for (int i = 1; i <= n ; i++) {
            if (i % 2)
                cout << -1 << ' ';
            else 
                cout << 1 << ' ';
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
