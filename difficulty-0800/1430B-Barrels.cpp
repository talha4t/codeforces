#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n, k; cin >> n >> k;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        v.push_back(x);
    }

    sort(v.rbegin(), v.rend());

    ll sum = v[0];
    int ct = 0;
    for (int i = 1; i < n; i++) {
        ct++;
        
        sum += v[i];

        if (ct == k)
            break;
    }

    cout << sum << ed;

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
    Tuesday, April 18, 2023 | 20:40:13 (UTC +06:00) Dhaka
*/