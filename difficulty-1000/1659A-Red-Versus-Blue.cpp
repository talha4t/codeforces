#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, r, b;
    cin >> n >> r >> b;

    vector<string> res(b + 1, "");
    for (int i = 0; i < r; i++) {
        int cur = i % (b + 1);

        res[cur] += "R";
    }

    
    cout << res[0];
    for (int i = 1; i <= b; i++)
        cout << 'B' << res[i];

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
    Sunday, October 29, 2023 | 06:35:34 (UTC +06:00) Dhaka
*/