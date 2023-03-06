#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;
    char c; cin >> c;
    string s; cin >> s;

    s += s;

    int mx = INT_MIN;
    if (c == 'g') {
        cout << 0 <<  ed;
        return true;
    }

    n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] == c) {
            int ct = 0;

            while(s[i] != 'g' and i < n) {
                ct++;
                i++;
            }
            mx = max(mx, ct);
        }
    }

    cout << mx << ed;
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
