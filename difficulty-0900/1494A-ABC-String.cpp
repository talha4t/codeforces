#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool isRegular(string s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (st.empty())
            st.push(s[i]);

        else if (st.top() == '(' and s[i] == ')')
            st.pop();
            
        else
            st.push(s[i]);
    }
    
    if (st.empty())
        return true;

    return false;
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
            if (s[i] == a)
                s[i] = '(';
            else if (s[i] == b)
                s[i] = ')';
            else 
                s[i] = ')';
        }
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] == a)
                s1[i] = '(';
            else if (s[i] == b)
                s1[i] = ')';
            else 
                s1[i] = '(';
        }

        if (isRegular(s) or isRegular(s1))
            cout << "YES" << ed;
        else 
            cout << "NO" << ed;
    }

    stack<char> st;
    st.push('a');
    st.push('b');
    st.push('c');
    st.pop();
    cerr << st.top() << ed;
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








   