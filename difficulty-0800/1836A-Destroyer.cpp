#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        mp[x]++;
    }

    bool ok = true;
    for (int i = 1; i <= 101; i++) {
        if (mp[i] > mp[i - 1])
            ok = false;
    }
    
    if (ok)
        cout << "YES\n";
    else
        cout << "NO\n";
        
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
    Sunday, June 18, 2023 | 20:34:07 (UTC +06:00) Dhaka
*/