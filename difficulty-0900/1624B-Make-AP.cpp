#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int a, b, c;
    cin >> a >> b >> c;

    if (((2 * b - a) > 0) and  (2 * b - a) % c == 0)
        cout << "YES" << ed;
    else if (((2 * b - c) > 0) and (2 * b - c) % a == 0)
        cout << "YES" << ed;
    else if ((a + c) % (2 * b) == 0)
        cout << "YES" << ed;
    else 
        cout << "NO" << ed;
        
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
