#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    vector<int> v(3), new_a;
    for (int i = 0; i < 3; i++)
        cin >> v[i];
    
    sort(v.begin(), v.end());

    if (v[0] == v[2])
        cout << "YES\n";
    else {
        int mn = v[0];

        int tmp = v[2] - mn;

        if (tmp == v[1] and tmp == v[0])
            cout << "YES\n";
        else if ((v[2] - mn) == mn and (v[1] - mn) == mn)
            cout << "YES\n";
        else if (v[0] == v[1]) {

            int tmp1 = tmp - mn;
            int tmp2 = tmp1 - mn;

            if (tmp1 == v[0] or tmp2 == v[0])
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else {
            int tmp1 = tmp - mn;
            int tmp2 = v[1] - mn;

            if (tmp2 == mn and tmp1 == mn)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
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
    Thursday, October 12, 2023 | 20:57:07 (UTC +06:00) Dhaka
*/