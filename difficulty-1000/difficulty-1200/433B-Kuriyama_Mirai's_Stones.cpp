#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

long long a[100013], b[100013];
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n; 

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        b[i] = a[i];
        a[i] += a[i - 1];
    }
    
    sort(b + 1, b + n + 1);
    for (int i = 1; i <= n; i++) 
        b[i] += b[i - 1];

    int q;
    cin >> q;
    while(q--) {
        int t, l, r;
        cin >> t >> l >> r ;

        if (t == 1)
            cout << a[r] - a[l - 1] << ed;
        else 
            cout << b[r] - b[l - 1] << ed;
    }

    return 0;
}

//github.com/talha4t (Talha Mahmud)
