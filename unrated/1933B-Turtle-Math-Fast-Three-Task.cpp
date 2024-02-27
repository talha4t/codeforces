#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    int sum = 0;
    vector<int> v(n);
    for (int &i : v) {
        cin >> i;

        sum += i;
    }

    int mod = sum % 3;

    if (mod == 0)
        cout << 0 << '\n';
    else if (mod == 2)
        cout << 1 << '\n';
    else {
        int ans = 2;
        for (int i = 0; i < n; i++) {
            sum -= v[i];

            if (sum % 3 == 0) {
                ans = 1;
                break;
            }

            sum += v[i];
        }
        for (int i = 0; i < n; i++) {
            sum++;
            
            if (sum % 3 == 0) {
                ans = 1;
                break;
            }

            sum--;
        }

        cout << ans << '\n';
    }
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
    Tuesday, February 27, 2024 | 20:39:12 (UTC +06:00) Dhaka
*/