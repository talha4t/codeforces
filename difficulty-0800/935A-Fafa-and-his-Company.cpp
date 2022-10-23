#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define str string
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;

    cin >> n;

    int ans = 0;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            ans++;
    }

    cout << ans << ed;
    
    return 0;
}