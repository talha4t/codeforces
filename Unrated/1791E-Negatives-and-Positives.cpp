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

        ll sum = 0, neg = 0;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];

            if (v[i] < 0) {
                neg++;
                v[i] = -v[i];
            }
            sum += v[i];
        }

        sort(v.begin(), v.end());
        if(neg & 1) {
            sum -= 2 * v[0];
        }

        cout << sum << ed;

    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
