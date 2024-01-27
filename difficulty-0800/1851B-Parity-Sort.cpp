#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    vector<int> isOdd(n, false);
    vector<int> even, odd;
    for (int i = 0; i < n; i++) {
        if (v[i] % 2) {
            isOdd[i] = true;
            odd.push_back(v[i]);
        }
        else
            even.push_back(v[i]);
    }

    sort(even.begin(), even.end(), greater<int>());
    sort(odd.begin(), odd.end(), greater<int>());

    for (int i = 0; i < n; i++) {
        if (isOdd[i]) {
            v[i] = odd.back();
            odd.pop_back();
        }
        else {
            v[i] = even.back();
            even.pop_back();
        }
    }

    if (is_sorted(v.begin(), v.end()))
        cout << "YES\n";
    else
        cout << "NO\n";
        
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
    Wednesday, July 26, 2023 | 06:49:47 (UTC +06:00) Dhaka
*/