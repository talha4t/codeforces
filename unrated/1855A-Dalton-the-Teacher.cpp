#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        v.push_back(x);
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == (i + 1))
            cnt++;
    }

    int ans = cnt / 2;
    
    if (ans * 2 != cnt)
        cout << ans + 1 << '\n';
    else
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
    Saturday, July 29, 2023 | 20:34:53 (UTC +06:00) Dhaka
*/