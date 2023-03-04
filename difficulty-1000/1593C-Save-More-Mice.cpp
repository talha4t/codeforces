#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n, k; cin >> n >> k;

    vector<int> v(k);
    for (int i = 0; i < k; i++) 
        cin >> v[i];

    sort(v.rbegin(), v.rend());

    int ct = 0;

    ll cat = 0;
    for (int i = 0; i < k; i++) {
        int temp = n - v[i];

        if (cat < v[i])
            ct++;
        cat += temp;

    }

    cout << ct << ed;

    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)