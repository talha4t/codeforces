#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool solve() {
    
    int n; cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> b(n, 0);
    reverse(a.begin(), a.end());
    int temp = a[0];
    for (int i = 0; i < n; i++) {
        if (temp != 0) 
            b[i] = 1;

        temp--;
        temp = max(temp, a[i + 1]);
    }

    reverse(b.begin(), b.end());

    for (int i = 0; i < n; i++)
        cout << b[i] << ' ';

    cout << ed;
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
