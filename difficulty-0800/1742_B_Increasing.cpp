#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

bool solve() {

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int ct = 1;
        for (int i = 0; i < n - 1; i++) {
            if (a[i] < a[i + 1]) 
                ct++;
        }

        if (ct == n) 
            cout << "YES" << ed;
        else 
            cout << "NO" << ed;

    }

    return true;
}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}

//github.com/talha4t (Talha Mahmud)
