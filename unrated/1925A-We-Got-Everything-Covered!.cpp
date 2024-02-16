#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, k; cin >> n >> k;

    int cnt = 0;
    char ch = 'a';
    for (int i = 1; i <= n * k; i++) {
        cout << ch;
        cnt++;
        ch++;
        if (cnt == k) {
            cnt = 0;
            ch = 'a';
        }
    }

    cout << '\n';
    
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

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Saturday, January 27, 2024 | 20:45:29 (UTC +06:00) Dhaka
*/