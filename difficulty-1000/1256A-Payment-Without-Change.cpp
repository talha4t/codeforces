#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool solve() {
    
    int a, b, n, s;
    cin >> a >> b >> n >> s;

    int temp = s / n;

    temp = min(temp, a) * n;

    if (temp + b >= s)
        cout << "YES" << ed;
    else
        cout << "NO" << ed;
    
    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
