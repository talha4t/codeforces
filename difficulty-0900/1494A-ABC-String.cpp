#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool isRegular(string expr)
{
    stack<char> s;
    char x;
 
    for (int i = 0; i < expr.length(); i++)
    {
        if (expr[i] == '(' )
        {
            s.push(expr[i]);
            continue;
        }
 
        if (s.empty())
            return false;
 
        switch (expr[i])
        {
        case ')':
 
            x = s.top();
            s.pop();
            if (x == '{' || x == '[')
                return false;
                break;
        }
    }
    return (s.empty());
}

bool solve() {
    
    string s; cin >> s;

    char a = s[0];
    char b = s[s.size() - 1];
    string s1 = s;

    if (a == b)
        cout << "NO" << ed;
    else {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == a) {
                s[i] = '(';
                s1[i] = '(';
            }
            else if (s[i] == b) {
                s[i] = ')';
                s1[i] = ')';
            }
            else {
                s[i] = ')';
                s1[i] = '(';
            }

        }
        if (isRegular(s) or isRegular(s1))
            cout << "YES" << ed;
        else 
            cout << "NO" << ed;
    }

    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)








   