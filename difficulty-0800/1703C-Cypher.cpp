#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++) {
        int b; cin >> b;
        string s; cin >> s;

        for (int j = 0; j < b; j++) {
            if (s[j] == 'D') {
                if (a[i] == 9) 
                    a[i] = 0;
                else
                    a[i]++;
            }
            else {
                if (a[i] == 0)
                    a[i] = 9;
                else
                    a[i]--;
            }
        }
    }

    for (auto u : a)
        cout << u << ' ';
    
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
    Sunday, August 27, 2023 | 14:12:12 (UTC +06:00) Dhaka
*/