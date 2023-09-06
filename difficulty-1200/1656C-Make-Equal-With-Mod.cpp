#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    bool ok = true;
    for (int i = 0; i < n; i++) {
        cin >> v[i];

        if (v[i] == 1)
            ok = false;
    }

    if (ok)
        cout << "YES\n";
    else {
        ok = true;

        sort(v.begin(), v.end());

        for (int i = 1; i < n; i++) {
            if (abs(v[i] - v[i - 1]) == 1)
                ok = false;
        }

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
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
    Wednesday, September 06, 2023 | 20:20:06 (UTC +06:00) Dhaka
*/