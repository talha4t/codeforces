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
        int l = s.length();

        int ct = 0;
        if (l % 2 == 0) {
            for (int i = 0, j = l / 2; i < l / 2; i++, j++) {
                if (s[i] == s[j])
                    ct++;
            }
        }

        if (ct == l / 2 and l > 1)
            cout << "YES" << ed;
        else
            cout << "NO" << ed;

    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
