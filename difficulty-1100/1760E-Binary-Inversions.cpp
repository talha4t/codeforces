#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n), new_v(n);
    for (int &i : v)
        cin >> i;

    new_v = v;

    // without changing 
    ll cnt_ = 0, cnt = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (v[i] == 0)
            cnt++;
        if (v[i] == 1)
            cnt_ += cnt;
    }

    // first zero -> one
    for (int i = 0; i < n; i++) {
        if (v[i] == 0) {
            v[i] = 1;
            break;
        }
    }

    ll cnt_with = 0;
    cnt = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (v[i] == 0)
            cnt++;
        if (v[i] == 1)
            cnt_with += cnt;
    }

    ll ans1 = max(cnt_with, cnt_);

    // last one -> zero
    for (int i = n - 1; i >= 0; i--) {
        if (new_v[i] == 1) {
            new_v[i] = 0;
            break;
        }
    }

    cnt_with = 0, cnt = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (new_v[i] == 0)
            cnt++;
        if (new_v[i] == 1)
            cnt_with += cnt;
    }
    
    ll ans2 = max(cnt_with, cnt_);

    cout << max(ans1, ans2) << '\n';

    return true;
}

int32_t main() {
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
    Wednesday, February 07, 2024 | 16:10:40 (UTC +06:00) Dhaka
*/