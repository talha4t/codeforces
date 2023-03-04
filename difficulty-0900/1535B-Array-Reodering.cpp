#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {

    int n; cin >> n;

    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        if (x % 2 == 0)
            v1.push_back(x);
        else if (x % 2)
            v2.push_back(x);

    }

    vector<int> v;
    for (int i = 0; i < v1.size(); i++)
        v.push_back(v1[i]);
    for (int i = 0; i < v2.size(); i++)
        v.push_back(v2[i]);

    int ct = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (__gcd(v[i], 2 * v[j]) > 1)
                ct++;
        }
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
