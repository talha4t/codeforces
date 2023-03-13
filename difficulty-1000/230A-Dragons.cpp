#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool solve() {
    int s, n; cin >> s >> n;

    int x, y;

    int tmp = s;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        
        v.push_back(make_pair(x, y));
    }

    sort(v.begin(), v.end());

    int ct = 0;
    for (int i = n; i < v.size(); i++) {
        if (tmp > v[i].first) {
            ct++;
            tmp += v[i].second;
        }
    }

    if (ct == n)
        cout << "YES" << ed;
    else
        cout << "NO" << ed;

    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // int t;
    // cin >> t;

    // while(t--) {
        solve();
    // }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
