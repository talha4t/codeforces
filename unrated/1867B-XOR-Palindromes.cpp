#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;
    string s; cin >> s;

    int l = 0, r = n - 1, mn = 0;
    while(l < r) {
        if (s[l] != s[r])
            mn++;
        
        l++, r--;
    }

    int d = 2;
    if (n & 1)
        d = 1;

    vector<char> v(n + 1, '0');
    for (int i = mn; i <= (n - mn); i += d)
        v[i] = '1';
    
    for (int i = 0; i <= n; i++)
        cout << v[i];
    
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
    Tuesday, September 12, 2023 | 08:35:35 (UTC +06:00) Dhaka
*/