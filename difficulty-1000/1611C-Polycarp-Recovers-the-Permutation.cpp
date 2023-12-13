#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    if (a[1] != n and a[n] != n)
        cout << -1;
    else {
        for (int i = n; i >= 1; i--)
            cout << a[i] << ' ';
    }

    cout << '\n';

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
    Sunday, October 22, 2023 | 01:41:29 (UTC +06:00) Dhaka
*/