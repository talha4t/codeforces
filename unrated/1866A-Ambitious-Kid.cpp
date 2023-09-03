#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    int mn = INT_MAX;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        mn = min(mn, abs(x));
    }

    cout << mn << '\n';
        
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Sunday, September 03, 2023 | 19:15:31 (UTC +06:00) Dhaka
*/