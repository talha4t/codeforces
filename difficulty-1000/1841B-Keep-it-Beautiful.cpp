#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> ok;
    bool isBroke = false;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        if (ok.empty()) {
            cout << 1;
            
            ok.push_back(x);
        }
        else {
            if (isBroke) {
                if (x < ok.back())
                    cout << 0;
                else {
                    if (x > ok[0])
                        cout << 0;
                    else {
                        cout << 1;
                        ok.push_back(x);
                    }
                }
            }
            else {
                if (x >= ok.back()) {
                    cout << 1;

                    ok.push_back(x);
                }
                else {
                    if (x > ok[0])
                        cout << 0;
                    else {
                        isBroke = true;
                        cout << 1;
                        ok.push_back(x);
                    }
                }
            }
        }
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
    Saturday, September 16, 2023 | 20:10:04 (UTC +06:00) Dhaka
*/