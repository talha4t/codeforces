#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int n; cin >> n;
    string s; cin >> s;

    if (s[0] == '9') {
        int carry = 0;
        string ans = "";
        for (int i = n - 1; i >= 0; i--) {
            int in = (s[i] - '0') + carry;
            if (in > 1) {
                ans += ((11 - in) + '0');
                carry = 1;
            }
            else {
                ans += ((1 - in) + '0');
                carry = 0;
            }
        }
        reverse(ans.begin(), ans.end());

        cout << ans;
    }
    else {
        for (int i = 0; i < n; i++)
            cout << '9' - s[i];
    }

    cout << '\n';

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
    Wednesday, November 22, 2023 | 16:30:10 (UTC +06:00) Dhaka
*/