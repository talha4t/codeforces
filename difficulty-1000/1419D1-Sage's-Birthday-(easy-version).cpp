#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    
    int mx = 0;
    if (!(n & 1))
        mx = (n - 1) / 2;
    else
        mx = n / 2;

    sort(v.begin(), v.end());

    vector<int> vv;
    for (int i = 0; i < mx; i++)
        vv.push_back(v[i]);

    reverse(v.begin(), v.end());

    int ct = 0;

    if (n > 2) {
            cout << mx << ed;
            for (int i = 0; i < n - mx; i++) {
                cout << v[i] << ' ';

                ct++;
                if (ct <= mx)
                    cout << vv[i] << ' ';
            }

            cout << ed;
    }
    else {
        cout << 0 << ed;
        for (int i = 0; i < n; i++)
            cout << v[i] << ' ';

        cout << ed;
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Friday, April 14, 2023 | 21:02:38 (UTC +06:00) Dhaka
*/