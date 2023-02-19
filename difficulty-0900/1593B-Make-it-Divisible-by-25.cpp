#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {

    string s; cin >> s;

    int n = s.size();
    int ans = n;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int num = (s[i] - '0') * 10 + (s[j] - '0');

            if (num % 25 == 0) {
                ans = min(ans, (j - i - 1) + (n - 1 - j));
            }
        }
    }

    cout << ans << ed;
    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
