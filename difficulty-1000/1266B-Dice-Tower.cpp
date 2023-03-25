#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    ll x; cin >> x;


    if (x > 14 and x % 14 >= 1 and x % 14 <= 6)
        cout << "YES" << ed;
    else
        cout << "NO" << ed;

    return true;
}

int main() {
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
