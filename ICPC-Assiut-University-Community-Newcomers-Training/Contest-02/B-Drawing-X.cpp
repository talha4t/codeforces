#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    int f = 0, l = n - 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == f) {
                if (f == l and i == j)
                    cout << "X";
                else
                    cout << "\\";
            }
            else if (j == l) {
                cout << "/";
            }
            else
                cout << "*";
            
        }
        f++;
        l--;
        cout << "\n";
    }
    return 0;
}

//github.com/talha4t (Talha Mahmud)
