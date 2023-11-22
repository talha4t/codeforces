#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    vector<int> v(n);
    for (int &i : v)
        cin >> i;

    if (n & 1)
        cout << "NO\n";
    else {
        sort(v.begin(), v.end());

        vector<int> b;
        for (int i = 0, j = n / 2; i < n / 2; i++, j++) {
            b.push_back(v[i]);
            b.push_back(v[j]);
        }

        bool ok = true;
        if ((b[0] < b[1] && b[0] < b[b.size() - 1]) or 
        (b[0] > b[1] && b[0] > b[b.size() - 1]))
            ok = true;
        else if ((b[b.size() - 1] > b[b.size() - 2] && b[b.size() - 1] > b[0])
            or (b[b.size() - 1] < b[b.size() - 2] && b[b.size() - 1] < b[0]))
            ok = true;
        else
            ok = false;
        if (ok) {
            for (int i = 1; i < b.size() - 2; i++) {
                if ((b[i] > b[i + 1] && b[i] > b[i - 1]) or 
                (b[i] < b[i + 1] && b[i] < b[i - 1]))
                    ok = true;
                else {
                    ok = false;
                    break;
                }
            }
        }

        if (ok) {
            cout << "YES\n";
            for (auto u : b)
                cout << u << ' ';
        }
        else
            cout << "NO";

        cout << '\n';
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
    Wednesday, November 22, 2023 | 07:03:34 (UTC +06:00) Dhaka
*/