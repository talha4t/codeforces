#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {

    int n; cin >> n;

    n += n;

    vector<pair<int, int>> vp;
    int e = 0, o = 0;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];

        if (v[i] & 1) {
            o++;
            vp.push_back({v[i], i});
        }
        else
            e++;
    } 

    for (int i = 0; i < n; i++) {
        if (!(v[i] & 1))
            vp.push_back({v[i], i});
    }

    int ct = 0;
    if ((e & 1) and (o & 1)) {
        for (int i = 1; i < n / 2; i++) {
            cout << vp[i].second + 1 << ' ';
            
            ct++;
            if (ct == 2) {
                ct = 0;
                cout << ed;
            }

        }

        ct = 0;
        for (int i = n / 2; i < n - 1; i++) {
            cout << vp[i].second + 1 << ' ';

            ct++;
            if (ct == 2) {
                ct = 0;
                cout << ed;
            }
        }
        cout << ed;
        
    }
    else {
        n -= 2;

        for (int i = 0; i < n / 2; i++) {
            cout << vp[i].second + 1 << ' ';
            
            ct++;
            if (ct == 2) {
                ct = 0;
                cout << ed;
            }

        }

        ct = 0;
        for (int i = n / 2; i < n; i++) {
            cout << vp[i].second + 1 << ' ';

            ct++;
            if (ct == 2) {
                ct = 0;
                cout << ed;
            }
        }
    
        cout << ed;
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
    Tuesday, April 25, 2023 | 16:05:04 (UTC +06:00) Dhaka
*/