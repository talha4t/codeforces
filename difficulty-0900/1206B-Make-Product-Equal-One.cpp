#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    ll minus = 0, sum = 0, zero = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];

        if (v[i])
            sum += abs(abs(v[i]) - 1);
        if (v[i] < 0)
            minus++;
        if (v[i] == 0)
            zero++;
    }

    if (minus % 2) {
        if (zero == 0)
            cout << sum + 2 << ed;
        else
            cout << sum + zero << ed;
    }
    else
        cout << sum + zero << ed;
    
    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
