#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    string s; cin >> s;

    int n = s.size();
    string new_s = "";
    vector<pair<char, int>> pr;
    char first = s[0], last = s[n - 1];
    for (int i = 1; i < n - 1; i++) {
        if (s[i] >= min(first, last) and s[i] <= max(first, last)) {
            new_s.push_back(s[i]);
            pr.push_back(make_pair(s[i], i + 1));
        }
    }

    if (s[0] < s[n - 1]) {
        sort(new_s.begin(), new_s.end());
        sort(pr.begin(), pr.end());
    }
    else {
        sort(new_s.rbegin(), new_s.rend());
        sort(pr.rbegin(), pr.rend());
    }

    new_s.push_back(s[n - 1]);
    new_s.insert(new_s.begin(), s[0]);
    
    int min_cost = 0, max_path = 0;
    for (int i = 0; i < new_s.size() - 1; i++)
        min_cost += abs(new_s[i] - new_s[i + 1]);

    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] >= min(first, last) and s[i] <= max(first, last))
            max_path++;
    }

    cout << min_cost << ' ' << max_path << '\n';
    cout << 1 << ' ';
    for (auto u : pr)
        cout << u.second << ' ';
    cout << n << '\n';

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
    Friday, November 24, 2023 | 10:38:21 (UTC +06:00) Dhaka
*/