#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n, k; cin >> n >> k;

    string s; cin >> s;

    if (!(k & 1)) {
        sort(s.begin(), s.end());
        
        cout << s << '\n';
    }
    else {
        string even = "", odd = "";
        for (int i = 0; i < n; i++) {
            if (i & 1)
                odd.push_back(s[i]);
            else
                even.push_back(s[i]);
        }

        sort(even.rbegin(), even.rend());
        sort(odd.rbegin(), odd.rend());

        for (int i = 0; i < n; i++) {
            if (i & 1) {
                cout << odd.back();
                odd.pop_back();
            }
            else {
                cout << even.back();
                even.pop_back();
            }
        }

        cout << '\n';
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
    Sunday, August 27, 2023 | 10:59:00 (UTC +06:00) Dhaka
*/