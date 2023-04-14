#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int mx = max_element(v.begin(), v.end()) - v.begin();

    int ans = -2;
    for (int i = mx; i < n - 1; i++) {
        if (v[i] > v[i + 1]) {
            ans = i;
            break;
        }
    }

    if (ans == -2) {
        for (int i = mx; i > 0; i--) {
            if (v[i] > v[i - 1]) {
                ans = i;
                break;
            }
        }
    }

    cout << ++ans << ed;

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
    Friday, April 14, 2023 | 11:05:58 (UTC +06:00) Dhaka
*/