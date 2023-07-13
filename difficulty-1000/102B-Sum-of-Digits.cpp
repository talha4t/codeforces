#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    string s; cin >> s;

    int l = s.size(), ans = 0;
    while(l > 1) {
        ll sum = 0;
        for (int i = 0; i < s.size(); i++)
            sum += (s[i] - '0');
        
        s = to_string(sum);

        l = s.size();
        
        ans++;

    }

    cout << ans << ed;

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
    Thursday, May 04, 2023 | 19:27:04 (UTC +06:00) Dhaka
*/