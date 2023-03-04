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
        int a, b, c;
        cin >> a >> b >> c;
        a--;

        ll d = 0;
        if (c < b)
            d = b - 1;
        else {
            d = c - b;
            d += c - 1;
        }
        if (a < d)
            cout << 1 << ed;
        else if (a > d)
            cout << 2 << ed;
        else
            cout << 3 << ed;

            //5, 3 -> 7
            // 5 ,(7 -3) == 4
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
