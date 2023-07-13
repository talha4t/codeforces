#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    n += n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    
    int ans = 0;
    for (int i = 0; i < n; i += 2) {
        for (int j = 1; j < n; j += 2) {
            if (v[i] == v[j])
                ans++;
        }
    }

    cout << ans << ed;

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Saturday, April 29, 2023 | 23:08:16 (UTC +06:00) Dhaka
*/