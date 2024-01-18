#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;
    
    vector<int> v(n);
    for (int &i : v)
        cin >> i;

    if (is_sorted(v.begin(), v.end()))
        cout << "YES\n";
    else {
        if (v[0] == 1)
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
    Saturday, November 25, 2023 | 20:50:01 (UTC +06:00) Dhaka
*/