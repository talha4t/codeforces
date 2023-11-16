#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> a, vec;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        a.push_back(x);
        mp[a[i]]++;
    }

    for (auto u : mp) {
        if (u.second > 0)
            vec.push_back(u.second);
    }

    if (n == 2)
        cout << "Yes\n";
    else {
        if ((int)mp.size() == 1)
            cout << "Yes\n";
        else if ((int)mp.size() == 2) {
            if (n & 1) {
                if ((vec[0] == n / 2 and vec[1] == (n / 2) + 1) or
                    (vec[0] == (n / 2) + 1 and vec[1] == n / 2))
                    cout << "Yes\n";
                else
                    cout << "No\n";
            }
            else {
                if (vec[0] == n / 2 and vec[1] == n / 2)
                    cout << "Yes\n";
                else
                    cout << "No\n";
            }
        }
        else
            cout << "No\n";
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
    Thursday, November 09, 2023 | 09:49:36 (UTC +06:00) Dhaka
*/