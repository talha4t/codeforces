#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {

    int n, k; cin >> n >> k;

    string s; cin >> s;

    if (k == 0)
        cout << s << ed;
    else if (n == 1)
        cout << 0 << ed;
    else {
        if (s[0] == '1') {
            for (int i = 1; i < n; i++) {
                if (k > 0) {
                    if (s[i] != '0') {
                        s[i] = '0';
                        k--;
                    }
                }
            }

            if (n > 1) {
                s[0] = '1';
                cout << s << ed;
            }
            else
                cout << s << ed;
        }
        else {
            for (int i = 0; i < n; i++) {
                if (k > 0) {
                    if (s[i] != '0') {
                        s[i] = '0';
                        k--;
                    }
                }
            }

            if (n > 1) {
                s[0] = '1';
                cout << s << ed;
            }
            else
                cout << s << ed;
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}

// *    author:  talha4t
//github.com/talha4t (Talha Mahmud)

