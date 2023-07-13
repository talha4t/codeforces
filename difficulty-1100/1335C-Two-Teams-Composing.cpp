#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {  
    
    int n; cin >> n;

    vector<int> v(n);
    map<int, int> mp;

    int mx = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];

        mp[v[i]]++;

        if (mx < mp[v[i]])
            mx = mp[v[i]];
    }

    int mp_size = mp.size();

    if (mx == mp_size)
        cout << mx - 1 << ed;
    else 
        cout << min(mp_size, mx) << ed;

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
    Friday, April 28, 2023 | 15:10:50 (UTC +06:00) Dhaka
*/