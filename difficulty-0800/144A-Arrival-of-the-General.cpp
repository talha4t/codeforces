#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    int mx_i = 0, mx_val = 0, mn_i = 0, mn_val = 110;

    for (int i = 1; i <= n; i++) {
        int x; cin >> x;

        if (x > mx_val) {
            mx_i = i;
            mx_val = x;
        }
        if (x <= mn_val) {
            mn_i = i;
            mn_val = x;
        }
    }

    if (mx_i > mn_i)
        cout << (mx_i - 1) + (n - mn_i) - 1 << ed;
    else
        cout << (mx_i - 1) + (n - mn_i) <<  ed;

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
    Saturday, April 22, 2023 | 22:10:03 (UTC +06:00) Dhaka
*/