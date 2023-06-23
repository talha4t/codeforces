#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    int n; cin >> n;
    string s; cin >> s;

    vector<int> sr;
    sr.clear();
    for (char c : s) {
        if (c % 2 == 1)
            sr.push_back(c - '0');
    }

    if ((int)sr.size() < 2)
        cout << -1 << '\n';
    else 
        cout << sr[0] << sr[1] << '\n';

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
    Friday, June 23, 2023 | 16:20:24 (UTC +06:00) Dhaka
*/