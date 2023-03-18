#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool solve() {

    int n; cin >> n;

    vector<pair<string, string>> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i].first >> v[i].second;


    sort(v.begin(), v.end());
    int len = unique(v.begin(), v.end()) - v.begin();

    cout << len << ed;

    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
