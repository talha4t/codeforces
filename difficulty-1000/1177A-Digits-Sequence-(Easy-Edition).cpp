#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {

    string s;

    for (int i = 0; i <= 10000; i++) {
        string in = to_string(i);

        s += in;
    }

    int n; cin >> n;

    cout << s[n] << ed;


    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;

    // while(t--) {
        solve();
    // }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
