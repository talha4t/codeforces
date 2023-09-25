#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    
    vector<int> b(n + 1, 0);
    int push = 1;
    if (a[1] == 1) {
        b[1] = 2;
        push = 3;
    }
    else {
        b[1] = 1;
        push = 2;
    }
    for (int i = 2; i <= n; i++) {
        if (a[i] != push)
            b[i] = push;
        else {
            push = a[i] + 1;
            b[i] = push;
        }
        push++;
    }

    cout << b[(int)b.size() - 1] << '\n';

    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for (int cs = 1; cs <= t; cs++){
        solve();
    }
    
    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Monday, September 25, 2023 | 20:35:17 (UTC +06:00) Dhaka
*/