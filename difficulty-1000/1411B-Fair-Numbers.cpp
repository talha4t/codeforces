#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    ll n; cin >> n;


    bool ok = true;
    string ans;
    while(ok) {
        string s = to_string(n);
        
        int cnt = 0;
        for (int i = 0; i < (int)s.size(); i++) {
            ll ch = s[i] - '0';

            if (ch == 0 or n % ch == 0) 
                cnt++;
        }

        if (cnt == (int)s.size()) {
            ans = s;
            ok = false;
        }

        n++;
    }

    cout << ans << '\n';

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Friday, November 03, 2023 | 22:39:05 (UTC +06:00) Dhaka
*/