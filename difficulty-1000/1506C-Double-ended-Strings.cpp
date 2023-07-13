#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    string a, b;
    cin >> a >> b;

    int mx = 0;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j <= b.size(); j++) {
            string ss = a.substr(i, j);
            if (b.find(ss) != -1) {
                mx = max(mx, (int)ss.length());
            }
        }
    }

    int aa = a.size() - mx;
    int bb = b.size() - mx;
    
    cout << aa + bb << ed;

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
    Thursday, April 13, 2023 | 10:29:14 (UTC +06:00) Dhaka
*/