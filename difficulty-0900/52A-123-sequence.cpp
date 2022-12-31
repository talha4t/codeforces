#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    int o = 0, t = 0, th = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 1)
            o++;
        else if (a[i] == 2)
            t++;
        else 
            th++;
    }

    cout << n - max({o, t, th}) << ed;

    return 0;
}

//github.com/talha4t (Talha Mahmud)

