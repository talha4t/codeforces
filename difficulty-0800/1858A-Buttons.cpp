#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int a, b, c;
    cin >> a >> b >> c;

    if (c & 1) {
        if (a == b)
            cout << "First\n";
        else if (a < b)
            cout << "Second\n";
        else
            cout << "First\n";
    }
    else {
        if (a == b)
            cout << "Second\n";
        else if (a < b)
            cout << "Second\n";
        else
            cout << "First\n";
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
    Tuesday, August 15, 2023 | 20:36:20 (UTC +06:00) Dhaka
*/