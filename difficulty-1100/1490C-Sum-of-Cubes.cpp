#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
const int N = 1e4 + 5;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    map<ll, int> mp;
    for (int i = 1; i < N; i++)
        mp[1LL * i * i * i] = 1;

    while(t--) {
        ll x; cin >> x;

        bool ok = false;
        for (int i = 1; (1LL * i * i * i) < x; i++) {
            if (mp[x - (1LL * i * i * i)])
                ok = true;
        }

        if (ok)
            cout << "YES";
        else
            cout << "NO";

        cout << '\n';
    }
    
    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Monday, November 27, 2023 | 12:55:49 (UTC +06:00) Dhaka
*/