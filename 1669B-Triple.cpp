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

        sort(a, a + n);

        int ct = 0;
        for (int i = 0; i < n - 2; i++) {
            if (a[i] == a[i + 1] and a[i + 1] == a[i + 2]) {
                cout << a[i] << ed;
                ct = 1;
                break;
            }
        }

        if (ct == 0)
            cout << -1 << ed;
        
    }

    return 0;
}

//github.com/talha4t (Talha Mahmud)
