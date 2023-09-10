#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int a, b; cin >> a >> b;

    ll ans = 0;
    for (int i = a; i <= b; i++)
        ans += (1LL * i * i);

    cout << ans << '\n';

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
    Saturday, September 09, 2023 | 21:00:21 (UTC +06:00) Dhaka
*/