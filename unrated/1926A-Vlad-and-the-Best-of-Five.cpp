#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    string s; cin >> s;

    int cntA = 0, cntB = 0;
    for (int i = 0; i < 5; i++) {
        if (s[i] == 'A')
            cntA++;
        else
            cntB++;
    }

    if (cntA > cntB)
        cout << 'A';
    else
        cout << 'B';

    cout << '\n';
     
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
    Monday, February 19, 2024 | 20:36:00 (UTC +06:00) Dhaka
*/