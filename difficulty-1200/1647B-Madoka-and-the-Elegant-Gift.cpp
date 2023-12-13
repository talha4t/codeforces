#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, m; cin >> n >> m;

    string s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    
    bool ok = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((s[i][j] == '0' and j + 1 < m) and (s[i][j + 1] == '1' and i + 1 < n) and (s[i + 1][j] == '1' and s[i + 1][j + 1] == '1'))
                ok = false;

            if ((s[i][j] == '0' and j - 1 > - 1) and (s[i][j - 1] == '1' and i + 1 < n) and (s[i + 1][j] == '1' and s[i + 1][j - 1] == '1'))
                ok = false;
            
            if ((s[i][j] == '0' and j + 1 < m) and (s[i][j + 1] == '1' and i - 1 > -1) and (s[i - 1][j] == '1' and s[i - 1][j + 1] == '1'))
                ok = false;
            
            if ((s[i][j] == '0' and j - 1 > - 1) and (s[i][j - 1] == '1' and i - 1 > - 1) and (s[i - 1][j] == '1' and s[i - 1][j - 1] == '1'))
                ok = false;
        }
    }

    if (ok)
        cout << "YES\n";
    else
        cout << "NO\n";
        
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Saturday, September 09, 2023 | 14:51:33 (UTC +06:00) Dhaka
*/