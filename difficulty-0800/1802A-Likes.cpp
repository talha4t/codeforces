#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 
#define mod 1000000007

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);

    int pos = 0, neg = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];

        if (v[i] > 0)
            pos++;
        else 
            neg++;
    } 

    vector<int> v1 = v;

    sort(v1.rbegin(), v1.rend());

    // max 
    int temp = 0, j = 0;;
    for (int i = 0; i < n; i++)  {
        if (v1[i] > 0) {
            cout << i + 1 << ' ';
            temp = i + 1;
        }
        else {
            j++;
            cout << temp - j << ' '; 
        }
    }
    
    cout << ed;
    // min

    // cerr << neg << ed;
    int k = 0;
    for (int i = 1; i <= n; i++) {
        if (neg < 1) {
            k++;
            cout << k << ' ';
        }
        if (i % 2 and neg >= 1)
            cout << 1 << ' ';
        else {
            if (neg >= 1) {
                cout << 0 << ' ';
                neg--;
            }
        }
        
    }
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
