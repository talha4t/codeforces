#include <bits/stdc++.h>
using namespace std;

bool solve()
{
    int i, j;

        char s[10][10];
        for (i = 0; i < 8; i++) {
            for (j = 0; j < 8; j++) {
                cin >> s[i][j];
            }
        }
        for (i = 1; i <= 8; i++) {
            for (j = 1; j <= 8; j++) {
                if (s[i][j] == '#' && s[i-1][j + 1] == '#' && s[i-1][j-1] == '#'
                    && s[i + 1][j - 1] == '#' && s[i + 1][j +1] == '#') {
                    cout << i+1 << " " << j+1;
                }
            }
        }
        
        cout << "\n";

}

bool test()
{
    int t;

    cin >> t;

    while(t--)
    {
        solve();
    }

    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    test();
    
    return 0;
}