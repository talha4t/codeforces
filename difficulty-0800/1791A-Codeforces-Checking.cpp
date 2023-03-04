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

        string s1 = "codeforces";
        int f = 0;
        for (int i = 0; i < 10; i++) {
            if (s[0] == s1[i]) {
                f = 1;
                break;
            }
        }

        if (f)
            cout << "YES" << ed;
        else 
            cout << "NO" << ed;
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
