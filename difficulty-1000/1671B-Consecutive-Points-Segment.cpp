#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    int sum = 0;
    for (int i = 1; i < n; i++)
        sum += a[i] - 1 - a[i - 1];

    cout << (sum > 2 ? "NO" : "YES") << '\n';

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
    Wednesday, October 25, 2023 | 06:06:01 (UTC +06:00) Dhaka
*/