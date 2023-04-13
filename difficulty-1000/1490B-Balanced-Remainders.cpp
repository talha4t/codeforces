#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    int c0 = 0, c1 = 0, c2 = 0;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];

        if (v[i] % 3 == 0)
            c0++;
        else if (v[i] % 3 == 1)
            c1++;
        else
            c2++;
        
    }

    int div = (c0 + c1 + c2) / 3;

    int res = 0;
    for (int i = 1; i <= 2; i++) {
        if (div < c0) {
            res += (c0 - div);
            c1 += (c0 - div);

            c0 = div;
        }
        
        if (div < c1) {
            res += (c1 - div);

            c2 += (c1 - div);

            c1 = div;
        }
        
        if (div < c2) {
            res += (c2 - div);

            c0 += (c2 - div);

            c2 = div;
        }
    }

    cout << res << ed;

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
    Thursday, April 13, 2023 | 15:31:40 (UTC +06:00) Dhaka
*/