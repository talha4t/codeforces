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

        int ct = 0;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            ct++;
        }

        ct = abs(10 - ct);

        cout << (ct * (ct - 1) * 3) << ed;
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
