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
        int a[3];
        for (int i = 0; i < 2; i++) 
            cin >> a[i];


        cout << a[0] + a[1] << ed;
    }

    return 0;
}

//github.com/talha4t (Talha Mahmud)
