#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int &i : v)
        cin >> i;

    int cop = 0, crime = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == -1) {
            if (cop == 0)
                crime++;
            else
                cop--;
        }
        else
            cop += v[i];
    }

    cout << abs(crime) << '\n';

    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Monday, January 01, 2024 | 14:34:39 (UTC +06:00) Dhaka
*/