#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v;
    while(n--) {
        int a, b; cin >> a >> b;

        if (a <= 10)
            v.push_back(b);
        else
            v.push_back(0);
    }

    int mx = INT_MIN, indx = 0;
    for (int i = 0; i < v.size(); i++) {
        if (mx <= v[i]) {
            mx = v[i];
            indx = i;
        }
    }
    
    cout << 1 + indx << '\n';

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
    Friday, July 21, 2023 | 20:40:57 (UTC +06:00) Dhaka
*/