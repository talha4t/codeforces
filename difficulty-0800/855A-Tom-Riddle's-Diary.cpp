#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    map<string, bool> mp;
    while(t--) {
        string s; cin >> s;

        if (mp[s])
            cout << "YES" << ed;
        else
            cout << "NO" << ed;

        mp[s] = true;
    }
    
    return 0;
}

// *    author:  talha4t
//github.com/talha4t (Talha Mahmud)


