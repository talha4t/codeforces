#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    if (n == 1)
        cout << 9 << ed;
    else if (n == 2)
        cout << 98 << ed;
    else if (n == 3)
        cout << 989 << ed;
    else {
        cout << 989;
        
        int panel = 0;
        for (int i = 4; i <= n; i++) {
            cout << panel;
            panel++;

            if (panel == 10)
                panel = 0;
        }

        cout << ed;
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
    Saturday, April 15, 2023 | 15:21:18 (UTC +06:00) Dhaka
*/