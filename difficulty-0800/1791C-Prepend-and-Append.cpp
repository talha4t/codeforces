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
        int n; cin >> n;

        string s; cin >> s;

        int ct = 0, l = s.length();
        for (int i = 0, j = s.length() - 1; i < n; i++, j--) {
            if ((s[i] == '1' and s[j] == '0') or (s[i] == '0' and s[j] == '1'))
                ct++;
                
            else if ((s[i] == '1' and s[j] != '0') or (s[i] == '0' and s[j] != '1'))
                break;
            
        }

        if (ct == l)
            cout << 0 << ed;
        else {
            ct += ct;
            // cout << "ct = "<<  ct << ed;
            cout << abs(l - ct )<< ed;
        }
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
