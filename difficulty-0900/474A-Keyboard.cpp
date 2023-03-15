#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool solve() {
    
    string pos, s; cin >> pos >> s;

    string a = "qwertyuiopasdfghjkl;zxcvbnm,./";

    if (pos == "R") {
        for (int i = 0; i < s.size(); i++) {
            for (int j = 0; j < a.size(); j++) {
                if (s[i] == a[j]) {
                    cout << a[j - 1]; 
                }
            }
        }
    }
    else {
        for (int i = 0; i < s.size(); i++) {
            for (int j = 0; j < a.size(); j++) {
                if (s[i] == a[j]) {
                    cout << a[j + 1]; 
                }
            }
        }
    }
    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
