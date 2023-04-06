#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    string a, b; cin >> a >> b;

    if (a[0] == b[0]) {
        cout << "YES\n";
        cout << a[0] << '*' << ed;
    }
    else if (a[a.size() - 1] == b[b.size() - 1]) {
        cout << "YES\n";
        cout << '*' << a[a.size() - 1] << ed;
    }
    else {
        bool ok = false;

        for(int i = 0; i < a.size() - 1; i++) {
            for(int j = 0; j < b.size() - 1; j++) {
                if(a[i] == b[j] && a[i + 1] == b[j + 1]){
                    cout << "YES\n";
                    cout << '*' << a[i] << a[i + 1] << '*' << ed;
                    ok = true;
                    break;
                }
            }
            if (ok)
                break;
        }

        if (!ok)
            cout << "NO" << ed;
        
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


