#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    string s, ss; cin >> s >> ss;

    sort(ss.begin(), ss.end());

    if (ss[0] == 'a') {
        if (ss.size() != 1)
            cout << -1 << ed;
        else
            cout << 1 << ed;
    }
    else {
        ll n =  pow(2, s.size());

        cout << n << endl;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}

// *    author:  talha4t
//github.com/talha4t (Talha Mahmud)
