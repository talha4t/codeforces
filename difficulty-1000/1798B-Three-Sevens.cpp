#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int m; cin >> m;
        
        for (int j = 0; j < m; j++) {
            int x; cin >> x;

            mp[x] = i;
        }
    }

    vector<int> v(n, -1);
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        int a = it->first;
        int last = it->second;

        if (v[last] == -1)
            v[last] = a;
    }

    bool ok = true;
    for (int i = 0; i < n; i++) {
        if (v[i] == -1) {
            ok = false;
            break;
        }
    }

    if (!ok)
        cout << -1 << ed;
    else {
        for (int i = 0; i < n; i++)
            cout << v[i] << ' ';
            
        cout << ed;
    }



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
    Sunday, April 09, 2023 | 19:56:02 (UTC +06:00) Dhaka
*/