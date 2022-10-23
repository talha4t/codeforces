#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

bool solve() {

    int t;
    cin >> t;

    while(t--) {

        char a[8][8];
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                cin >> a[i][j];
            }
        }

        int ch = 0, cv = 0;
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (a[j][i] == 'R') {
                    ch++;
                    break;
                }
            }
        }
         for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if (a[i][j] == 'B') {
                    cv++;
                    break;
                }
            }
        }

        if (cv == ch) 
            cout << "R" << ed;
        else if (cv > ch) 
            cout << "B" << ed;
        else
            cout << "R" << ed;

        // cout << ch << " " << cv << ed;


    }


    return true;
}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}

//github.com/talha4t (Talha Mahmud)
