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

        string pi = "3141592653589793238462643383279";

        int ct = 0;
        for (int i = 0; i < s.length(); i++) {
            
            if (s[i] != pi[i]) {
                if (ct > 0)
                    break;
                ct = 0;
                // break;
            }
            if (s[i] == pi[i])
                ct++;
            else 
                break;
        }

        cout << ct << ed;
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
