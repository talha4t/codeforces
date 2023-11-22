#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, k; cin >> n >> k;

    vector<int> v(n);
    for (int &i : v)
        cin >> i;

    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
        mp[v[i]].push_back(i);

    while(k--) {
        int a, b; cin >> a >> b;

        if (mp[a].empty() || mp[b].empty())
            cout << "NO";
        else {
            if (a == b)
                cout << "YES";
            else if (mp[a].front() < mp[b].back())
                cout << "YES";
            else
                cout << "NO";
        }

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
    Wednesday, November 22, 2023 | 11:56:04 (UTC +06:00) Dhaka
*/