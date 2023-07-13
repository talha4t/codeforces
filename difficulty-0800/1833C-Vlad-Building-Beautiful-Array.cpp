#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v, odd_v, even_v;

    int odd_cnt = 0, even_cnt = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        if (x & 1) {
            odd_cnt++;
            odd_v.push_back(x);
        }
        else {
            even_cnt++;
            even_v.push_back(x);
        }
    }

    sort(odd_v.begin(), odd_v.end());
    sort(even_v.begin(), even_v.end());
    
    if (even_cnt == n or odd_cnt == n)
        cout << "YES" << '\n';
    else {
        if ((even_v[0] - odd_v[0]) > 0)
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
    Friday, May 19, 2023 | 21:09:20 (UTC +06:00) Dhaka
*/