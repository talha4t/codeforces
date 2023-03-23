#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;
    
    vector<int> v(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());

    ll x = 0, y = 0;
    for (int i = n / 2; i < n; i++)
        x += v[i];
    for (int i = 0; i < n / 2; i++)
        y += v[i];
        
    cout << (x * x + y * y) << ed;

    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
