#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    if (n == 1)
        cout << -1 << ed;
    else {
        for (int i = 1; i < n; i++)
            cout << 7;
        
        cout << 8 << ed;
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
    Saturday, April 15, 2023 | 17:55:10 (UTC +06:00) Dhaka
*/