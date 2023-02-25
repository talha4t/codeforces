#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        string s; cin >> s;

        string s1 = "YES";

        bool found = s.find(s1) != string::npos;
        while(found){
            cout << "YES" << ed;
        }

        cout << "NO" << ed;
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
