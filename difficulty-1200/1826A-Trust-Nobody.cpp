#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    int ans = -1;
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] > i)
                cnt++;
        }
        if (cnt == i)
            ans = i;
    }

    cout << ans << '\n';
    
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
    Thursday, September 07, 2023 | 19:11:01 (UTC +06:00) Dhaka
*/