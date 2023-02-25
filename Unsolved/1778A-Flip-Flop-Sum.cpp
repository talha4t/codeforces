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

        vector<int> v;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;

            v.push_back(x);
        }

        int ctM = 0, ctP = 0, f = 1;
        for (int i = 0; i < n - 1; i++) {
            if (f) {
                if (v[i] == -1 and v[i + 1] == -1) {
                    v[i] = 1;
                    v[i + 1] = 1;
                    f = 0;
                }
            }
            else if (v[i] == 1)
                ctP++;
            else 
                ctM++;
        }

        cout << abs(ctP - ctM) << ed;
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
