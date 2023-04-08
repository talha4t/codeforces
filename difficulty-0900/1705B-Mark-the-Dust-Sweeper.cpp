#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    reverse(v.begin(), v.end());

    while(v.size() > 1 and v.back() == 0)
        v.pop_back();
    
    reverse(v.begin(), v.end());
    
    
    ll ans = 0;
    for (int i = 0; i < v.size() - 1; i++) {
        if (v[i] == 0)
            ans++;
        else
            ans += v[i];
    }

    cout << ans << ed;

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
    Saturday, April 08, 2023 | 08:16:27 (UTC +06:00) Dhaka
*/