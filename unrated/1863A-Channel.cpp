#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, a, q;
    cin >> n >> a >> q;

    string s; cin >> s;

    if (n == a)
        cout << "YES\n";
    else {
        int ans = a, ok = 0, maybe = a;
        for (int i = 0; i < q; i++) {
            if (s[i] == '+') {
                ans++;
                maybe++;

                if (ans >= n)
                    ok = 1;
            }
            else
                ans--;
        }

        if (maybe >= n) {
            if (ok)
                cout << "YES\n";
            else
                cout << "MAYBE\n";
        }
        else
            cout << "NO\n";
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
    Wednesday, August 30, 2023 | 20:35:21 (UTC +06:00) Dhaka
*/