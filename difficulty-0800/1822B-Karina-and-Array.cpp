#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) 
        cin >> v[i];
    
    sort(v.begin(), v.end());

    ll first = (1LL * v[0] * v[1]);
    ll second = (1LL * v[n - 2] * v[n - 1]);

    cout << ((first > second) ? first : second) << ed;

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
    Tuesday, April 25, 2023 | 06:55:02 (UTC +06:00) Dhaka
*/