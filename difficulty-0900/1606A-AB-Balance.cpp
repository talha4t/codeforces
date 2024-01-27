#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool solve() {
    
    string s; cin >> s;

    int len = s.size();

    int ab = 0, ba = 0;
    for (int i = 1; i < len; i++) {
        if (s[i] == 'b' and s[i - 1] == 'a')
            ab++;
        else if (s[i] == 'a' and s[i - 1] == 'b')
            ba++;
    }

    if (ab == ba)
        cout << s << ed;
    else {
        if (ab < ba) {
            s[0] = 'a';
            cout << s << ed;
            }
        else {
            s[0] = 'b';
            cout << s << ed;
        }
    }
    
    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
