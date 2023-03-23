#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    string s; cin >> s;

    int c1 = 0, c2 = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '0')
            c1++;
        else
            c2++;
    }        

    int moves = min(c1, c2);

    if (moves & 1)
        cout << "DA" << ed;
    else
        cout << "NET" << ed;
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
