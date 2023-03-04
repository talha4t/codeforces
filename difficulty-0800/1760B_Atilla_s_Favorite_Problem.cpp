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
        int n;
        cin >> n;

        string s;
        cin >> s;

        sort(s.begin(), s.end());

        int a = s[s.length() - 1];
        
        int ct = 0;
        for (int i = 97; i <= a; i++) 
            ct++;

        cout << ct << ed;
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
