#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<bool> used(n + 1);
    for (int i = 1; i <= n; i++) {
        if (used[i])
            continue;
        
        int a = i;
        while(a <= n) {
            used[a] = true;
            cout << a << ' ';

            a *= 2;
        }
    }

    cout << '\n';
    
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
    Tuesday, September 19, 2023 | 16:39:37 (UTC +06:00) Dhaka
*/