#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> p(n);
    for (auto &i : p)
        cin >> i;

    deque<int> ans;
    ans.push_front(p[0]);
    for (int i = 1; i < n; i++) {
        if (ans.fro() > p[i])
            ans.push_front(p[i]);
        else
            ans.push_back(p[i]);
    }

    for (auto u : ans)
        cout << u << ' ';

    cout << '\n';

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
    Tuesday, October 24, 2023 | 14:49:01 (UTC +06:00) Dhaka
*/