#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int &i : v)
        cin >> i;
    
    if (is_sorted(v.begin(), v.end()))
        cout << 0;
    else {
        reverse(v.begin(), v.end());

        int track = -1;
        for (int i = 0; i < n; i++) {
            if (v[i] < v[i + 1]) {
                track = i + 1;
                break;
            }
        }

        map<int, int> mp;
        for (int i = track; i < n; i++)
            mp[v[i]]++;
        
        int ind = -1;
        for (int i = 0; i < track; i++) {
            if (mp[v[i]]) {
                ind = i;
                break;
            }
        }
        
        set<int> se;
        if (ind == -1) {
            for (int i = track; i < n; i++)
                se.insert(v[i]);
        }
        else {
            for (int i = ind; i < n; i++)
                se.insert(v[i]);
        }

        cout << (int)se.size();
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
    Tuesday, December 19, 2023 | 10:14:04 (UTC +06:00) Dhaka
*/