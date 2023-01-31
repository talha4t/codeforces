#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

string s;

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        cin >> s;

        int ct = 0, z = 0, l = s.length() - 1;
        for (int i = 1; i <= l; i++) {
            if (s[i] == '0')
                ct++;

            if (s[i] != '0')
                z++;
        }

        if (ct == l) {
            cout << 1 << ed;
            cout << s << ed;
        }

        else { 
            cout << z + 1 << ed;
            for (int i = 0; i <= l; i++) {
                if (s[i] != '0') {
                    cout << s[i];
                    for (int j = i + 1; j <= l; j++) {
                        cout << 0;
                    }
                    cout << ' ';
                }
            }
            cout << ed;
        }

    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)


