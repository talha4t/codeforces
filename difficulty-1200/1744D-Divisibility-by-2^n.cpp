#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

int two_count(int n) {
    int count = 0;

    while(n % 2 == 0) {
        count++;

        n /= 2;
    }

    return count;
} 
bool solve() {
    
    int n; cin >> n;

    vector<int> v(n + 1, 0);
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;

        cnt += two_count(x);

        x = i;
        while(x % 2 == 0) {
            v[i]++;

            x /= 2;
        }
    }

    sort(v.rbegin(), v.rend());
    
    int ans = 0;
    for (auto u : v) {
        if (cnt >= n)
            break;
        
        ans++;
        cnt += u;
    }

    if (cnt < n)
        cout << -1 << '\n';
    else 
        cout << ans << '\n';

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
    Monday, September 04, 2023 | 21:53:40 (UTC +06:00) Dhaka
*/