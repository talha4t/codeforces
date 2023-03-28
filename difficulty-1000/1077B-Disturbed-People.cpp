#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int pair = 0, c = 0;
    for (int i = 1; i < n - 1; i++) {
        if ( v[i - 1] == 1 and v[i] == 0 and v[i + 1] == 1) {
            pair++;
            v[i + 1] = 0;
        }
    }

    cout << pair << ed;
    
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        solve();
    
    return 0;
}

// *    author:  talha4t
//github.com/talha4t (Talha Mahmud)


