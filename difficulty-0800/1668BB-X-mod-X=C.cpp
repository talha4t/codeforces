#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

void solve() {
    int a, b, c; 
    cin >> a >> b >> c;

    cout << a + b + c << ' ' << b + c << ' ' <<  c << ed;
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
