#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    int temp = n / 2;

    if (temp % 2)
        cout << "NO" << ed;
    else {
        cout << "YES" << ed;

        for (int i = 2; i <= n; i += 2)
            cout << i << ' ';
        
        int ct = 0;
        for (int i = 2; i <= n; i += 2) {
            ct++;
            if (ct <= n / 4)
                cout << i - 1 << ' ';
            
            else 
                cout << i + 1 << ' ';
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
