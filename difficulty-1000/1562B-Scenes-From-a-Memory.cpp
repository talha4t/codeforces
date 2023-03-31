#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool prime[10007];

bool solve() {
    
    int n; cin >> n;

    string s; cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1' or s[i] == '4' or s[i] == '6' or s[i] == '8' or s[i] == '9') {
            cout << 1 << ed;
            cout << s[i] << ed;
            return true;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (!prime[(s[i] - '0') * 10 + (s[j] - '0')]) {
                cout << 2 << ed;
                cout << s[i] << s[j] << ed;
                return true;
            }
        }
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 2; i < 100; i++) {
        prime[i] = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0)
                prime[i] = false;
        }
    }

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}

// *    author:  talha4t
//github.com/talha4t (Talha Mahmud)

