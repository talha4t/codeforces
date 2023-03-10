#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int s = 0, d = 0, ct = 0;
    
    while(!v.empty()) {
        ct++;
        if (ct % 2) {
            if (v[0] > v.back()) {
                s += v[0];
                v.erase(v.begin());
            }
            else {
                s += v.back();
                v.pop_back();
            }
        }
        else {
            if (v[0] > v.back()) {
                d += v[0];
                v.erase(v.begin());
            }
            else {
                d += v.back();
                v.pop_back();
            }
        }
    }


    cout << s << ' ' << d << ed;

    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;

    // while(t--) {
        solve();
    // }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
