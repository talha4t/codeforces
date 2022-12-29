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
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];

        ll ans = 0;
        for (int i = 1; i < n; i++)
            ans = max(ans, 1LL * a[i] * a[i - 1]);
        

        cout << ans << ed;
    }
    return 0;
}

//github.com/talha4t (Talha Mahmud)
