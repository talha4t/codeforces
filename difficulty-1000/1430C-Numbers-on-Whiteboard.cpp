#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    cout << 2 << ed;
    
    int a = n, b = n - 1;
    for (int i = 1; i < n; i++) {
        cout << a << ' ' << b << ed;

        a = (a + b + 1) / 2;
        b--;
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
    Tuesday, April 18, 2023 | 09:38:46 (UTC +06:00) Dhaka
*/