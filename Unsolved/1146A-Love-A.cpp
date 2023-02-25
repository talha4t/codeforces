#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s; cin >> s;

    int ctA = 0, ctB = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a')
            ctA++;
        else if (s[i] != 'a')
            ctB++;
    }

    if (ctA > ctB)
        cout << s.length() << ed;
    else 
        cout << abs(ctB - ctA) << ed;
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
