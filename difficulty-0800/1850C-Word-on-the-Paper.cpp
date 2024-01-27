#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    string s;
    char a[8][8];
    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            cin >> a[i][j];

            if (c >= 'a' and c <= 'z')
                s.push_back(c);
        }
    }

    cout << s << '\n';

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
    Friday, July 21, 2023 | 20:47:17 (UTC +06:00) Dhaka
*/