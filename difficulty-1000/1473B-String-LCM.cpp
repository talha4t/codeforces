#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    string a, b; cin >> a >> b;

    int l_a = a.size();
    int l_b = b.size();

    int gcd = __gcd(l_a, l_b);
    int lcm = (l_a * l_b) / gcd;

    string aa = a, bb = b;
    if (a == b)
        cout << a << ed;
    else {
        for (int i = 1; i < l_b; i++)
            aa += a;
        for (int i = 1; i < l_a; i++)
            bb += b;

        if (aa == bb) {
            string ans = min(a, b);
            for (int i = 1; i <= lcm; i++) {
                if (ans.size() == lcm)
                    break;
                else
                    ans += min(a, b);
            }
            cout << ans << ed;
        }
        else
            cout << -1 << ed;
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
    Friday, April 14, 2023 | 15:04:25 (UTC +06:00) Dhaka
*/

