#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        ll n; cin >> n;

        if (n % 2) 
            cout << (n / 2) + 1<< ed;
        else 
            cout << n / 2 << ed;

    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
