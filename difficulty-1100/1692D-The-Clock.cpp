#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool is_palindrome(string s) {
    int l = 0, r = 4;

    while(l < r) {
        if (s[l] != s[r])
            return false;

        l++, r--;
    }

    return true;
}

bool solve() {
    
    string s; cin >> s;
    int x; cin >> x;

    int h = x / 60, m = x % 60, ans = 0;

    map<string, bool>visited;
    while(!visited[s]) {
        ans += is_palindrome(s);

        visited[s] = true;

        int hh = ((s[0] - '0') * 10) + (s[1] - '0');
        int mm = ((s[3] - '0') * 10) + (s[4] - '0');

        mm += m;
        if (mm > 59)
            hh++;

        mm %= 60;

        hh += h;
        hh %= 24;

        s[0] = ('0' + (hh / 10));
        s[1] = ('0' + (hh % 10));
        s[3] = ('0' + (mm / 10));
        s[4] = ('0' + (mm % 10));
    }

    cout << ans << '\n';

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
    Thursday, November 16, 2023 | 19:44:19 (UTC +06:00) Dhaka
*/