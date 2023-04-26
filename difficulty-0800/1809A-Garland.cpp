#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    string s; cin >> s;

    set<int> ss;
    for (int i = 0; i < s.size(); i++)
        ss.insert(s[i] - '0');


    sort(s.begin(), s.end());

    char f = s[0];
    char l = s[3];

    int c_f = 0, c_l = 0;
    for (int i = 0; i < s.size(); i++) {
        if (f == s[i])
            c_f++;
        else
            c_l++;
    }

    int sz = ss.size();
    if (sz == 4 or sz == 3 or (sz == 2 and c_f == 2 and c_l == 2))
        cout << 4 << ed;
    else if (sz == 2)
        cout << 6 << ed;
    else
        cout << -1 << ed;

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
    Wednesday, April 26, 2023 | 06:34:47 (UTC +06:00) Dhaka
*/