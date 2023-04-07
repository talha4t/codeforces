#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) 
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    int zero = 0, ct = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] - a[i] == 0)
            zero++;
        else if (b[i] - a[i] > 0) {
            sum += b[i] - a[i];
            ct++;
        }
    }


    int ex_zero = n - ct;
    if (ct > 0 and (sum % ct == 0 and ex_zero == zero) or zero == n)
        cout << "YES" << ed;
    else
        cout << "NO" << ed;

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

// *    author:  talha4t
//github.com/talha4t (Talha Mahmud)


