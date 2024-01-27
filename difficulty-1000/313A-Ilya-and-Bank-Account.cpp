#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool solve() {
    
    string s; cin >> s;

    int l = s.size();
    if (s[0] == '-') {
        if (l == 2)
            cout << s << ed;
        else {
            if (s[l - 2] - '0' > s[l - 1] - '0') {
                s[l - 2] = s[l - 1];
                s.pop_back();

                int in = stoi(s);
                cout << in << ed;
            }
            else if (s[l - 2] - '0' < s[l - 1] - '0') {
                s.pop_back();
                int in = stoi(s);
                cout << in << ed;
            }
            else {
                s.pop_back();
                int in = stoi(s);
                cout << in << ed;
            }
        }
    }
    else 
        cout << s << ed;
    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
