#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

int find_max(vector<int> a) {

    int mx = INT_MIN;

    for (int i = 0; i < a.size(); i++) {
        if (mx < a[i])
            mx = a[i];
    }

    return mx;
}

bool solve() {

    int n; cin >> n;

    vector<int> a, b;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        a.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        b.push_back(x);
    }

    for (int i = 0; i < n; i++) {
        if (a[i] > b[i])
            swap(a[i], b[i]);
    }

    cout << find_max(a) * find_max(b);

    cout << ed;
    
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
