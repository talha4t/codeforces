#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

bool solve() {

    int t;
    cin >> t;

    while(t--) {
        int a, b, c;
        cin >> a >> b >> c;

        if ((a + b == c) or (b + c == a) or (a + c == b))
            cout << "YES" << ed;
        else
            cout << "NO" << ed; 
    }

    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}

//github.com/talha4t (Talha Mahmud)
