#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    n = unique(v.begin(), v.end()) - v.begin();

    int ct = 0;
    for (int i = 0; i < n; i++) {
        if ((!i or v[i - 1] > v[i]) and (i == n - 1 or v[i] < v[i + 1]))
            ct++;
    }

    if (ct == 1)
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
    Saturday, April 08, 2023 | 18:13:09 (UTC +06:00) Dhaka
*/