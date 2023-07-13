#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, k; cin >> n >> k;

    string s; cin >> s;

    int i, j;
    for (i = 0, j = n - 1; i < (n - 1) / 2; i++, j--) {
        if (s[i] != s[j])
            break;
    }

    if (i < k) cout << "NO\n";
    else cout << "YES\n";
    
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
    Tuesday, June 27, 2023 | 11:40:49 (UTC +06:00) Dhaka
*/