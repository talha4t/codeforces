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
        int n; cin >> n;

        string s; cin >> s;
        
        int ct = 0;
        for (int i = 2; i < s.length(); i++) {
            if (s[i] != s[i - 1])
                ct++;
        }

        cout << ct + 2<< ed;
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
