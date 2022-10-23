#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

bool solve() {

    int k, n;
    cin >> n >> k;

    int a[53];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ct = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0)
            ct++;
    }
    
    if (ct == n)
        cout << "NO" << ed;
    else
        cout << "YES" << ed;

    return true;
}

int32_t main()
{
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
