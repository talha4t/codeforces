#include <bits/stdc++.h>
using namespace std;

#define ed '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        
        if (n == 1)
            cout << 2 << ed;
        else if (n % 3 == 0)
            cout << n / 3 << ed;
        else 
            cout << (n / 3) + 1 << ed;

            
    }
    return 0;
}

//github.com/talha4t (Talha Mahmud)
