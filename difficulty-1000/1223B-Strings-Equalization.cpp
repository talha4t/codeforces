#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    string a, b; cin >> a >> b;

    bool ok = false;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a.size(); j++) {
            if (a[i] == b[j]) {
                ok = true;
                break;
            }
        }
    }

    if (ok)
        cout << "YES" << ed;
    else
        cout << "NO" << ed;

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

//github.com/talha4t (Talha Mahmud)
