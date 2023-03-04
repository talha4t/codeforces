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
        int n;
        cin >> n;

        vector<int> v;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        
        if (v[0] == v[n - 1])
            cout << "NO"  << ed;
        else {
            cout << "YES" << ed;

            cout << v[n - 1] << ' ';
            for (int i = 0; i < n - 1; i++)
                cout << v[i] << ' ';
            cout << ed;
        }
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
