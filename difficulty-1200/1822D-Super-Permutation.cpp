#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> even, odd;
    for (int i = 1; i <= n; i++) {
        if (i & 1)
            odd.push_back(i);
        else
            even.push_back(i);
    }

    reverse(odd.begin(), odd.end());

    if (n == 1)
        cout << 1;
    else if (n & 1)
        cout << -1;
    else {
        for (int i = 0; i < n; i++) {
            if (i & 1) {
                cout << odd.back() << ' ';
                odd.pop_back();
            }
            else {
                cout << even.back() << ' ';
                even.pop_back();
            }
        }
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
    Saturday, September 16, 2023 | 22:55:19 (UTC +06:00) Dhaka
*/