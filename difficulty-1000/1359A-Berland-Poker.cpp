#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n, m, k;
    cin >> n >> m >> k;

    int cards = n / k;

    if (cards >= m)
        cout << m << ed;
    else 
        cout << cards - ceil(1.0 * (m - cards) / (--k)) << ed;

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
    Sunday, April 16, 2023 | 20:09:04 (UTC +06:00) Dhaka
*/