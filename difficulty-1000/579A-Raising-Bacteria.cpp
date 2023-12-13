#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool solve() {
    
    int n; cin >> n;

    bitset<128> bin(n);

    string s = bin.to_string();

    int ans = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1')
            ans++;
    }

    cout << ans << ed;
    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)