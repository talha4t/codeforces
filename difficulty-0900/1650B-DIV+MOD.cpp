#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int l, r, a; 
    cin >> l >> r >> a;

    int ans1 = (r / a) + (r % a);

    int x = r % a + 1;
    int ans2 = ((r - x) % a) + ((r - x) / a);

    if ((r - x) < l)
        cout << ans1 << '\n';
    else
        cout << max(ans1, ans2) << '\n';

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
    Monday, July 17, 2023 | 11:26:44 (UTC +06:00) Dhaka
*/

