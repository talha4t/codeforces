#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n, a, b;
    cin >> n >> a >> b;

    string s = "abcdefghijklmnopqrstuvwxyz";

    int ct = 0, c = 0;
    for (int i = 0; i < n; i++) {
        if (ct == b) {
            i = 0;
            ct = 0;
        }
        if (c == n)
            break;
        ct++;
        c++;
        cout << s[i];
    }


    cout << ed;

    
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
