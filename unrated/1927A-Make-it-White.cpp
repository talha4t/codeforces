#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;
    string s; cin >> s;

    int ind1 = -1, ind2 = -1, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'B') {
            ind1 = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == 'B') {
            ind2 = i;
            break;
        }
    }

    for (int i = ind1; i < ind2; i++)
        cnt++;

    cout << ++cnt << '\n';

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
    Tuesday, February 06, 2024 | 20:46:38 (UTC +06:00) Dhaka
*/