#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    string s; cin >> s;

    string a_to_h = "abcdefgh";
    string one_to_eight = "12345678";

    for (int i = 0; i < 8; i++) {
        if (s[1] == one_to_eight[i])
            continue;
        else
            cout << s[0] << one_to_eight[i];

        cout << '\n';
    }

    for (int i = 0; i < 8; i++) {
        if (s[0] == a_to_h[i])
            continue;
        else
            cout << a_to_h[i] << s[1];

        cout << '\n';
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
    Tuesday, December 05, 2023 | 20:47:22 (UTC +06:00) Dhaka
*/