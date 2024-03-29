#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
        cin >> v[i];
    

    bool ok = false;
    for (int i = 1; i < n; i++) {
        if (v[i - 1] > v[i]) {
            ok = false;
        }
        else {
            ok = true;
            break;
        }
    }

    if (ok)
        cout << "YES" << ed;
    else
        cout << "NO" << ed;

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
    Thursday, April 13, 2023 | 14:29:26 (UTC +06:00) Dhaka
*/