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
        
        int ct = 0, k = 0, t = 1;
        for (int i = 0; i < n; i++) {
            int mul1 = 0, mul2 = 0; 

            for (int j = k + 1; j < n; j++) {
                if (v[j] == 2)
                    mul2 = mul2 + v[j];
            }
            for (int j = 0; j <= k; j++) {
                if (v[j] == 2)
                    mul1 = mul1 + v[j];
            }
            k++;

            if (mul1 == mul2) {
                t  = 0;
                break;
            }
        }

        if (t)
            cout << -1 << ed;
        else
            cout << k << ed;
            

    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
