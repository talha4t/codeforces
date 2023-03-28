#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n, k, m;
    cin >> n >> k >> m;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.rbegin(), v.rend());

    int max1 = v[0];
    int max2 = v[1];

    int times1 = (k / (m + 1));
    int times2 = k - times1;

    ll sum = max(times1, times2) * 1LL * max1+ min(times1, times2) * 1LL * max2;


    cout << sum << ed;

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


