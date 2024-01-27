#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; string s; cin >> n >> s;

    int cnt = 1, ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (s[i] == s[i + 1])
            cnt++;
        else
            cnt = 1;
        
        ans = max(ans, cnt);
    }

    cout << 1 + ans << '\n';

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
    Saturday, July 15, 2023 | 20:59:32 (UTC +06:00) Dhaka
*/