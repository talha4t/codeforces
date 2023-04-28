#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n, x; cin >> n >> x;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];


    sort(v.rbegin(), v.rend());

    ll sum = 0;
    int ct = 1;

    for (int i = 0; i < n; i++) {
        sum += v[i];

        if ((sum / (ct * 1.0)) >= x) {
            ct++;
        }
        else 
            break;
    }

    --ct;
    
    cout << ct << ed;

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
    Friday, April 28, 2023 | 21:13:03 (UTC +06:00) Dhaka
*/