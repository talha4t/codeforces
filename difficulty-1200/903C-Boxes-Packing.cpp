#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    map<int, int> mp;

    int mnFreq = INT_MIN;
    for (int i = 0; i < n; i++) {
        mp[v[i]]++;

        mnFreq = max(mp[v[i]], mnFreq);
    }

    cout << mnFreq << ed;

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


