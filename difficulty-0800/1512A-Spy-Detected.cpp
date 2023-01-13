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
        int n; cin >> n;

        int v[n];
        for (int i = 1; i <= n; i++)
            cin >> v[i];

        int ans = 0, ct = 0;
        for (int i = 1; i <= n - 1; i++) {
            if (v[1] != v[2] and v[1] != v[3])
                ans = 1;
            else if (v[1] != v[2] and v[1] == v[3])
                ans = 2;
            else if (v[1] == v[2] and v[1] != v[3])
                ans = 3;
            else {
                if (v[i] == v[i + 1])
                    ct++;
                if (v[i] != v[i + 1])
                    ans = i;
            }
        }

        if (ct == n - 2)
            cout << ans  + 1<< ed;
        else 
            cout << ans << ed;
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
