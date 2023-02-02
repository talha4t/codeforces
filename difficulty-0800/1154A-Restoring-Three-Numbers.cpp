#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> v;
    for (int i = 0; i < 4; i++) {
        int x; cin >> x;

        v.push_back(x);
    }

    sort(v.begin(), v.end());

    cout << v[3] - v[2] << ' '<< v[3] - v[1] << ' ' << v[3] - v[0];
    

    return 0;
}

//github.com/talha4t (Talha Mahmud)
