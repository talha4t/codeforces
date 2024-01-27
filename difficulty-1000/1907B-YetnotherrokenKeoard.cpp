#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    string s; cin >> s;

    vector<pair<char, int>> upper, lower;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] >= 'A' and s[i] <= 'Z' and s[i] != 'B') {
            upper.push_back(make_pair(s[i], i));
        }
        if (s[i] >= 'a' and s[i] <= 'z' and s[i] != 'b') {
            lower.push_back(make_pair(s[i], i));
        }

        if ((!upper.empty()) and s[i] == 'B') 
            upper.pop_back();
        if ((!lower.empty()) and s[i] == 'b')
            lower.pop_back();

    }

    if (upper.empty() and lower.empty())
        cout << ' ';
    else {
        if (upper.empty() and (!lower.empty())) {
            for (auto u : lower)
                cout << u.first;
        }
        else if (lower.empty() and (!upper.empty())) {
            for (auto u : upper)
                cout << u.first;
        }
        else {
            vector<pair<int, char>> new_v;
            for (int i = 0; i < (int)upper.size(); i++)
                new_v.push_back(make_pair(upper[i].second, upper[i].first));
            
            for (int i = 0; i < (int)lower.size(); i++)
                new_v.push_back(make_pair(lower[i].second, lower[i].first));
            
            sort(new_v.begin(), new_v.end());
            for (auto u : new_v)
                cout << u.second;
        }
    }
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
    Tuesday, December 05, 2023 | 20:56:10 (UTC +06:00) Dhaka
*/