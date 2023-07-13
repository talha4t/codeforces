#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int ans = 0;
    for (int i = 1; i <= d; i++) {
        if ((i % k == 0) or (i % l == 0) or (i % m == 0) or (i % n == 0))   
            ans++;
    }

    cout << ans << ed;

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
    Sunday, April 23, 2023 | 21:43:37 (UTC +06:00) Dhaka
*/