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
        int n, m;
        cin >> n >> m;

        if (n % 2 != m % 2)
            cout << "Burenka" << ed;
        else 
            cout << "Tonya" << ed;
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)

