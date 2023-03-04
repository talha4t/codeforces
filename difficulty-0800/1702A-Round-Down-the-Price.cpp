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
        string s;
        cin >> s;

        if (s == "1")
            cout << 0 << ed;
        else {
            int len = s.size() - 1;
            
            int num = stoi(s);

            int res = ceil(pow(10, len));
            cout << num - res << ed;
        }
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
