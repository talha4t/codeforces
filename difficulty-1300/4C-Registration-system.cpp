#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    map<string, int>m;
    while(t--) {
        string s;
        cin >> s;

        if (!m[s])
            cout << "OK" << ed;
        else 
            cout << s << m[s] << ed;

        m[s]++;
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
