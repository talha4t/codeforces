#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool isTPrime(ll x) {
    int ct = 0;

    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;

    return true;
}
bool solve() {

    ll x;
    cin >> x;

    int tmp = sqrt(x);
    if(tmp * tmp == x and isTPrime(tmp))
        cout << "YES" << ed;
    else 
        cout << "NO" << ed;
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
