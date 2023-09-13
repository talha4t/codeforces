#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    
    if (v[0] == v[n - 1])
        cout << -1 << '\n';
    else {
        vector<int> b, c;

        reverse(v.begin(), v.end());

        int ind = -1;
        for (int i = 0; i < n - 1; i++) {
            if (v[i] == v[i + 1])
                c.push_back(v[i]);
            else {
                ind = i;
                break;
            }
        }
        c.push_back(v[ind]);
        
        for (int i = ind + 1; i < n; i++)
            b.push_back(v[i]);

        cout << (int)b.size() << ' ' << (int)c.size() << '\n';
        for (auto u : b)
            cout << u << ' ';
        
        cout << '\n';

        for (auto u : c)
            cout << u << ' ';

        cout << '\n';

    }

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

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Tuesday, September 12, 2023 | 15:26:39 (UTC +06:00) Dhaka
*/