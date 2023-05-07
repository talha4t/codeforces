#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        v.push_back(x);
    }

    int ans = 0, mx = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == 0)
            ans++;
        else if (v[i] == 1)
            ans = 0;
        
        if (mx < ans)
            mx = ans;
    }

    cout << mx << ed;

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
    Saturday, May 06, 2023 | 20:35:46 (UTC +06:00) Dhaka
*/