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
        int a, b, c, d, tmp;
        cin >> a >> b >> c >> d;

        int yes = 0;
        for (int i = 0; i < 4; i++) {
            if (a < b && c < d && a < c && b < d) {
                yes = 1;
                break;
            }
            tmp = a, a = c, c = d, d = b, b = tmp;

        }

        if (yos)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}

//github.com/talha4t (Talha Mahmud)
