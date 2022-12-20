#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'W' and s[i + 1] == 'U' and s[i + 2] == 'B') {
            cout << ' ';
            i = i + 2;
        }
        else
            cout << s[i];
    }


    return 0;
}

//github.com/talha4t (Talha Mahmud)
