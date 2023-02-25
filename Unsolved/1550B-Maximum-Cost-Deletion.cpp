#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n, a, b; 
    cin >> n >> a >> b;

    string s; cin >> s;

    int len = s.size();
    if (b >= 0) {
        
        int res = a * len + b;

        cout << res << ed;
    }
    else {
        int ctZ = 0;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] != s[i - 1])
                ctZ++;
        }

        int res = ((ctZ / 2) + 1) * b;

        cout << res * (a * len) << ed;
    }
        
    return true;
}

int32_t main() {
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