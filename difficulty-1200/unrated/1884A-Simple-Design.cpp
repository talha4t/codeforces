#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    string x; cin >> x;

    int k; cin >> k;

    int sum = 0;
    for (int i = 0; i < x.size(); i++)
        sum += (x[i] - '0');

    if (sum % k == 0)
        cout << x << '\n';
    else {
        int st = stoi(x);

        int ok = true;
        while(ok) {
            st++;

            string tmp = to_string(st);

            sum = 0;
            for (int i = 0; i < tmp.size(); i++)
                sum += (tmp[i] - '0');

            if (sum % k == 0) {
                cout << tmp << '\n';
                ok = false;
            }
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
    Sunday, October 22, 2023 | 13:04:27 (UTC +06:00) Dhaka
*/