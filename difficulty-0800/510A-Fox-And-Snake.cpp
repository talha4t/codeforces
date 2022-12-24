#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    int ct = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1)
            ct++;
        else 
            ct = ct + 2;

        for (int j = 1; j <= m; j++) {
            if (i % 2 == 1)
                cout << '#';
            else {
                if (ct % 2 != 0) {
                    if (j == m)
                        cout << '#';
                    else 
                        cout << '.';
                }
                else {
                    if (j == 1)
                        cout << '#';
                    else 
                        cout << '.';
                }
            }
        }
        cout << '\n';
    }

    return 0;
}

//github.com/talha4t (Talha Mahmud)
