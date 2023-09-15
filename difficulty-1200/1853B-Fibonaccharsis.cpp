#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, k; cin >> n >> k;

    if (k > 30)
        cout << 0 << '\n';
    else {
        int ans = 0;
        for (int i = 0; i <= n; i++) {
            int second = n;
            int first = i;

            bool ok = true;
            for (int j = 1; j <= k - 2; j++) {
                int tmp = second - first;
                second = first;
                first = tmp;

                if (first <= second and first >= 0)
                    continue;
                else
                    ok = false;
            }
            if (ok)
                ++ans;
        }

        cout << ans << '\n';
    }

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
    Friday, September 15, 2023 | 09:45:22 (UTC +06:00) Dhaka
*/