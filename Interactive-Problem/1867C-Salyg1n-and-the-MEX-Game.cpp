#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    

    int MEX = v[n - 1] + 1;
    for (int i = 0; i < n; i++) {
        if (v[i] != i) {
            MEX = i;
            break;
        }
    }

    cout << MEX << '\n';
    cout << flush;
    
    int y;
    while(cin >> y) {
        if (y == -1)
            break;
        
        cout << y << '\n';
        cout << flush;
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
    Tuesday, September 12, 2023 | 12:07:37 (UTC +06:00) Dhaka
*/