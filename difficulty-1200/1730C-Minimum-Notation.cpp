#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    // min = 2
    string s; cin >> s;

    char mn = '9';
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] <= mn)
            mn = s[i];
        else
            s[i] = min((char)(s[i] + 1), (char)'9');
    }

    sort(s.begin(), s.end());

    cout << s << '\n';

    return true;
}

int32_t main() {
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
    Sunday, February 04, 2024 | 14:03:24 (UTC +06:00) Dhaka
*/