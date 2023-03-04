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
        int a, b;
        cin >> a >> b;

        if (a % b == 0)
            cout << 0 << ed;
        else 
            cout << (b - (a % b)) % b << ed;
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
