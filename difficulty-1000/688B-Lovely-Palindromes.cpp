#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    string s; cin >> s;

    for (int i = 0; i < s.size(); i++)
        cout << s[i];

    for (int i = s.size() - 1; i >= 0; i--)
        cout << s[i];

    
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}

// *    author:  talha4t
//github.com/talha4t (Talha Mahmud)


