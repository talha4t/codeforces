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
        int n; cin >> n;

        int mx = -1e8 + 7, ind;
        vector<int> v;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;

            v.push_back(x);
        }

        vector<int> v1 = v;

        sort(v1.rbegin(), v1.rend());

        for (int i = 0; i < n; i++) {
            if (v[i] == v1[0])
                cout << v1[0] - v1[1] << ' ';
            else 
                cout << v[i] - v1[0] << ' ';
        }

        cout << ed;
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
