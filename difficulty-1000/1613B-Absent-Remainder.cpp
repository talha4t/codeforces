#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> a(n);
    for (int &i : a)
        cin >> i;

    sort(a.begin(), a.end());

    for (int i = 1; i <= n / 2; i++)
        cout << a[i] << ' ' << a[0] << '\n';

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
    Sunday, October 08, 2023 | 00:18:05 (UTC +06:00) Dhaka
*/