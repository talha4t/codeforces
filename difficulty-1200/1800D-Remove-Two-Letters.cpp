#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;
    string s; cin >> s;

    int ans = n - 1;
    for (int i = 1; i < n - 1; i++) {
        if (s[i - 1] == s[i + 1])
            ans--;
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
    Friday, December 01, 2023 | 12:11:06 (UTC +06:00) Dhaka
*/