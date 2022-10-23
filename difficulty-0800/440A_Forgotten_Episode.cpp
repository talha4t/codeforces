#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

int compar(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, x, sum = 0;
    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        cin >> x;
        sum += x;
    }

    cout << (n * (n + 1) / 2) - sum << ed;

    return 0;
}

//github.com/talha4t (Talha Mahmud)
//Thursday, October 06, 2022 | 09:53:53 AM (+06)
