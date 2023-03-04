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

        vector<int> v;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;

            v.push_back(x);
        }

        int c1 = -1, c2 = -1, c3 = -1;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k += j) {
                    if ((v[i] + v[j] + v[k]) % 2 and i != j and j != k and k != i) {
                        c1 = i;
                        c2 = j;
                        c3 = k;
                    }
                }
            }
        }

        if (c1 == -1 or c2 == -1 or c3 == -1)
            cout << "NO" << ed;
        else {
            cout << "YES" << ed;
            cout << c1 + 1<< ' ' << c2 + 1<< ' ' << c3 + 1<< ed;
        }

    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)