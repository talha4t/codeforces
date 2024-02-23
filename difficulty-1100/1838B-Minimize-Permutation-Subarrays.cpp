#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> pos(n + 1);
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;

        pos[x] = i;
    }

    int a = pos[1], b = pos[2], c = pos[n];
    
    vector<int> v = {a, b, c};
    sort(v.begin(), v.end());

    if (v[1] == c)
        cout << "1 1\n";
    else if (v[2] == c)
        cout << v[1] << ' ' << v[2] << '\n';
    else
        cout << v[0] << ' ' << v[1] << '\n';

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
    Friday, February 23, 2024 | 15:22:03 (UTC +06:00) Dhaka
*/