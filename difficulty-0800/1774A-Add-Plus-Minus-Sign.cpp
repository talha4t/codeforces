#include <bits/stdc++.h>
using namespace std;

#define ed '\n'

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

        int sum = s[0] - '0';
        for (int i = 1; i < n; i++) {
            sum += s[i] - '0';

            if (sum % 2)
                cout << '+';
            else 
                cout << '-';
            
        }
        cout << ed;
    }
    return 0;
}

//github.com/talha4t (Talha Mahmud)
