#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    string s; cin >> s;

    int ctL = 0, ctR = 0, ans = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(')
            ctL++;
        else 
            ctL--;
        
        if (ctL < 0) {
            ans++;

            ctL = 0;
        }

    }

    cout << ans << ed;


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
