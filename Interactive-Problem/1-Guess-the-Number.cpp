#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int l = 1, r = 1000000;

    while(r - l >= 1) {
        int mid = (l + r + 1) / 2;

        cout << mid << '\n';
        cout << flush;

        string s; cin >> s;
        if (s == "<")
            r = mid - 1;
        else
            l = mid;
    }

    cout << "! " << l << '\n';
    cout << flush;

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
    Tuesday, September 12, 2023 | 10:11:40 (UTC +06:00) Dhaka
*/