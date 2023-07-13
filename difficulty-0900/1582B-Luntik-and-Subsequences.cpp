#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);

    int one = 0, zero = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];

        if (v[i] == 1)
            one++;
        else if (v[i] == 0)
            zero++;
    }

    cout << one * (1LL << zero) << ed;

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


