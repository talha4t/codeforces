#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, m; cin >> n >> m;

    string a, b; cin >> a >> b;

    int cnt = 0, ok = 0;
    for (int i = 1; i <= 8; i++) {
        if (a.find(b) != string::npos) {
            ok = 1;
            break;
        }
        
        cnt++;

        string tmp = a;
        for (int i = 0; i < tmp.size(); i++)
            a.push_back(tmp[i]);
    }

    if (ok)
        cout << cnt << '\n';
    else
        cout << -1 << '\n';

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
    Thursday, October 12, 2023 | 20:36:20 (UTC +06:00) Dhaka
*/