#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    int n; cin >> n;
    string s; cin >> s;

    for (int i = 0; i < n; i++) {
            if (s[i] == 'M')
                s[i] = 'm';
            else if (s[i] == 'E')
                s[i] = 'e';
            else if (s[i] == 'O')
                s[i] = 'o';
            else if (s[i] == 'W')
                s[i] = 'w';
        }
        s += "T";

        string cat;
        for (int i = 0; i < n; i++) {
            if (s[i] != s[i + 1]) 
                cat += s[i];
        }

        if (cat == "meow")
            cout << "YES" << ed;
        else 
            cout << "NO" << ed;
    
    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)