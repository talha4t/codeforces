#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        string s; cin >> s;

        int l = s.length() - 1;
        if ((int)s[l] % 2 == 0)
            cout << '0' << ed;
        else if ((s[0] - '0') % 2 == 0)
            cout << '1' << ed;
        else {

            bool ex = false;
            for (int i = 0; i < l; i++) {
                if ((s[i] - '0') % 2 == 0) {
                    ex = true;
                    break;
                }
            }

            if (ex)
                cout << '2' << ed;
            else
                cout << '-' << '1' << ed;
        }

    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
