#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n, m; cin >> n >> m;

    string ans = "", tmp, mid, right;

    set<string> st;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;

        tmp = s;

        reverse(tmp.begin(), tmp.end());

        if (tmp == s)
            mid = tmp;
        else if (st.count(tmp))
            ans += tmp;

        st.insert(s);
    }

    right = ans;

    reverse(right.begin(), right.end());
    
    ans = ans + mid + right;

    cout << ans.size() << ed;
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
    Thursday, April 27, 2023 | 15:36:45 (UTC +06:00) Dhaka
*/