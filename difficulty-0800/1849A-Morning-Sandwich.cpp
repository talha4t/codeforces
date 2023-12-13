#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {

    int b, c, h;
    cin >> b >> c >> h;

    int tot = h + c;

    int ans = 0;
    while(1) {
        ans++;
        b--;
        if (tot == 0 or b == 0)
            break;
            
        if (tot) {
            ans++;
            tot--;
        }
        
    }  

    cout << ans << '\n';
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
    Thursday, July 27, 2023 | 20:37:42 (UTC +06:00) Dhaka
*/