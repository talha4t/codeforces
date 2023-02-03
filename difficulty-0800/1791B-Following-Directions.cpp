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

        string c; cin >> c;

        int x = 0, y = 0;

        int f = 0;
        for (int i = 0; i < c.length(); i++) {
            if (c[i] == 'U')
                x++;
            else if (c[i] == 'D')
                x--;
            else if (c[i] == 'R')
                y++;
            else if (c[i] == 'L')
                y--;

            if (x == 1 and y == 1) {
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
