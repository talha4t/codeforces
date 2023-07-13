#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int a, b, c; cin >> a >> b >> c;
    
    if (a < b) swap(a, b);
    if (a < c) swap(a, c);
    if (b < c) swap(b, c);
    
    int cnt = 0;
    if (a > 0) {
        cnt++;
        --a;
    }
    if (b > 0) {
        cnt++;
        --b;
    }
    if (c > 0) {
        cnt++;
        --c;
    }

    if (a > 0 and b > 0) {
        cnt++;
        --a, --b;
    }
    if (b > 0 and c > 0) {
        cnt++;
        --b, --c;
    }
    if (a > 0 and c > 0) {
        cnt++;
        --a, --c;
    }
    if (a > 0 and b > 0 and c > 0) {
        cnt++;
        --a, --b, --c;
    }

    cout << cnt << '\n';

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
    Monday, June 26, 2023 | 21:40:54 (UTC +06:00) Dhaka
*/