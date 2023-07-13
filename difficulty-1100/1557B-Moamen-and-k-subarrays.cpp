#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n, k; cin >> n >> k;

    vector<int> v(n);
    map<int, int> mp;
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];

        mp[v[i]] = i;
    }

    sort(v.begin(), v.end());

    int ct = 1, idx = mp[v[0]];
    for (int i = 1; i < n; i++) {
        if (mp[v[i]] != idx + 1)
            ct++;

        idx = mp[v[i]];
    }

    if (k >= ct)
        cout << "Yes" << ed;
    else
        cout << "No" << ed;

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
    Thursday, April 20, 2023 | 21:45:58 (UTC +06:00) Dhaka
*/