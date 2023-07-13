#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    pair<int, int> v[n];
    for (int i = 0; i < n; i++) {
        cin >> v[i].first;
        v[i].first *= -1;
        v[i].second = i + 1;
    }

    sort(v, v + n);

    ll sum = 0;
    for (int i = 0; i < n; i++)
        sum += (i * (-1 * v[i].first)) + 1;

    cout << sum << ed;

    for (int i = 0; i < n; i++)
        cout << v[i].second << ' ';
    
    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
