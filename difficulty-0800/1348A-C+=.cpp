#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        ll a, b, n;
        cin >> a >> b >> n;
        
        ll ct = 0;
        while (a <= n and b <= n) {
            if (a < b) {
                a = a + b;
                ct++;
            }
            else {
                b = b + a;
                ct++;
            }
        }

        cout << ct << ed;
    }

    return 0;
}

//github.com/talha4t (Talha Mahmud)
