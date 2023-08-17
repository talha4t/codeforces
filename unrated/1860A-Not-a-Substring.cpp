#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    string s; cin >> s;

    int len = s.size();

    int l = 0, r = 0;
    for (int i = 1; i <= len / 2; i++) {
        if (s[i] == '(')
            l++;
    }
    for (int i = 1; i <= len / 2; i++) {
        if (s[i] == ')')
            r++;
    }

    bool ok = false;
    for (int i = 0; i < len - 1; i++) {
        if (s[i] == '(' and s[i + 1] == ')')
            ok = true;
        else
            ok = false;
        i++;
    }

    if (s[0] == '(' and s[1] == ')' and len == 2)
        cout << "NO\n";
    else if (s[1] == '(' and s[0] == ')' and len == 2) {
        cout << "YES\n(())\n";
    }
    else {
        if (s[0] == '(' and s[1] == '(' or (s[1] == ')' and s[0] == ')') or (s[0] == '(' and s[1] == ')' and s[2] == ')')) {
            cout << "YES\n";

            for (int i = 1; i <= 2 * len; i++) {
                if (i & 1)
                    cout << '(';
                else
                    cout << ')';
            }
            cout << '\n';
        }
        else {
            cout << "YES\n";

            for (int i = 1; i <= len; i++)
                cout << '(';
            for (int i = 1; i <= len; i++)
                cout << ')';
            
            cout << '\n';
        }
    }

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
    Thursday, August 17, 2023 | 20:55:14 (UTC +06:00) Dhaka
*/