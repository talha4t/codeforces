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
        vector<ll> v;
        for (int i = 0; i < 7; i++) {
            ll x; cin >> x;

            v.push_back(x);
        }

        ll a = 0, b = 0, c = 0;
        for (int i = 0; i < 7 - 1; i++) {
            for (int j = i + 1; j < 7 - 2; j++) {
                for (int k = j + 1; k < 7 - 3; k++) {
                    if (v[i] + v[j] + v[k] == v[6]) {
                        a = v[i];
                        b = v[j];
                        c = v[k];
                    }
                }
            }
        }

        cout << a << ' ' << b << ' ' << c << ed;
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
