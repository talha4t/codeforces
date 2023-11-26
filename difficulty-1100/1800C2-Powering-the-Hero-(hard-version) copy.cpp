#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int &i : v)
        cin >> i;
    
    ll ans = 0;
    priority_queue<int> pq;
    for (int i = 0; i < n; i++) {
        if (v[i] == 0) {
            if (!pq.empty()) {
                ans += pq.top();
                pq.pop();
            }
        }
        else
            pq.push(v[i]);
    }

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
    Sunday, November 26, 2023 | 21:48:02 (UTC +06:00) Dhaka
*/