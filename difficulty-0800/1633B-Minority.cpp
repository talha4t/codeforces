#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {

    string s; cin >> s;

    int ct1 = 0, ct2 = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1')
            ct1++;
        else 
            ct2++;
    }  

    if (ct1 == ct2)
        cout << ct1 - 1 << ed; 
    else 
        cout << min(ct1, ct2) << ed;
    
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

