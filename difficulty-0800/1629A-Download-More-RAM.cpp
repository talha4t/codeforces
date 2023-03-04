#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {

    int n, k; cin >> n >> k;

    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        a.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        b.push_back(x);
    }

    vector<pair<int, int>>v;
    for (int i = 0; i < n; i++)
        v.push_back(make_pair(a[i], b[i]));

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        if (k >= v[i].first)
            k += v[i].second;
    }

    cout << k << ed;
    
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

//github.com/talha4t (Talha Mahmud)
