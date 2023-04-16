#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n, k; cin >> n >> k;

    int tmp = 2;

    while(n % tmp)
        ++tmp;
    
    cout << n + tmp + ((k - 1) * 1LL * 2) << ed;

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
    Sunday, April 16, 2023 | 15:15:03 (UTC +06:00) Dhaka
*/