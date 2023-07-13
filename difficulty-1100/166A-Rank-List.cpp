#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool comp(const pair<int, int> &p1, pair<int, int> &p2) {
    if (p1.first > p2.first)
        return true;
    else if (p1.first == p2.first)
        return (p1.second > p2.second);
    else 
        return false;
}

bool solve() {

    int n, k; cin >> n >> k;

    vector<pair<int, int>> v(n);
 
    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
        v[i].first *= -1;
    }

    sort(v.begin(), v.end());

    int ct = 0;
    for (auto u : v) {
        if (u == v[k - 1])
            ct++;
    }

    cout << ct << ed;

    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
