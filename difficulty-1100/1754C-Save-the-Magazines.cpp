#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;
    string s; cin >> s;

    vector<int> v(n);
    for (int &i : v)
        cin >> i;

    int ind = 0, ans = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            ind = i;
            break;
        }
        ans += v[i];
        if (i == n - 1) {
            ind = i;
            break;
        }
    }

    vector<int> res;
    for (int i = ind; i < n; i++) {
        if (s[i] == '0' && cnt > 0) {
            sort(res.begin(), res.end());
            ans -= res[0];
            ans += accumulate(res.begin(), res.end(), 0);
            
            res.clear();
            cnt = 0;
        }

        if (s[i] == '0' && s[i + 1] == '1')
            res.push_back(v[i]);
        if (s[i] == '1') {
            res.push_back(v[i]);
            cnt++;
        }
    }

    if (cnt > 0) {
        sort(res.begin(), res.end());
        ans -= res[0];
        ans += accumulate(res.begin(), res.end(), 0);
    }

    cout << ans << '\n';

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
    Thursday, December 14, 2023 | 22:23:09 (UTC +06:00) Dhaka
*/