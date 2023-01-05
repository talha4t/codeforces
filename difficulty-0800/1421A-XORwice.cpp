#include <bits/stdc++.h>
using namespace std;

#define ed '\n'

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int a, b;
        cin >> a >> b;

        cout << (int)(a ^ b) << ed;
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
