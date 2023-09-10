#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    string s; cin >> s;

    int k; cin >> k;

    set<char> se;
    for (int i = 0; i < s.size(); i++)
        se.insert(s[i]);
    
    if ((int)se.size() >= k)
        cout << "0\n";
    else if ((int)s.size() < k)
        cout << "impossible\n";
    else
        cout << (k - (int)se.size()) << '\n';
        
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
    Saturday, September 09, 2023 | 21:06:26 (UTC +06:00) Dhaka
*/