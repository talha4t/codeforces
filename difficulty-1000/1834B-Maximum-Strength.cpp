#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    string l, r; cin >> l >> r;
    
    int len_l = l.size(), len_r = r.size();

    int ind = -1;
    for (int i = 0; i < len_l; i++) {
        if (l[i] != r[i]) {
            ind = i + 1;
            break;
        }
    }

    int ans = (9 * (len_r - ind));
    if (len_l != len_r) {
        ans = 0;
        ans += (r[0] - '0');
        for (int i = 2; i <= len_r; i++) 
            ans += 9; 
    }
    else
        ans += abs((l[ind - 1] - '0') - (r[ind - 1] - '0'));
    
    if (l == r)
        cout << 0;
    else
        cout << ans;
    
    cout << '\n';

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
    Wednesday, September 27, 2023 | 12:36:46 (UTC +06:00) Dhaka
*/