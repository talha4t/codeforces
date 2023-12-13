#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    

    if (a[0] > n)
        cout << "NO";
    else {
        vector<ll> b(n, 0);
        for (int i = 0; i < n; i++) 
            b[a[i] - 1]++;
        
        for (int i = n - 2; i >= 0; i--)
            b[i] += b[i + 1];

        if (a == b)
            cout << "YES";
        else
            cout << "NO";
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
    Saturday, August 26, 2023 | 12:05:10 (UTC +06:00) Dhaka
*/