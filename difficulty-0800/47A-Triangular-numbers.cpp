#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define str string
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, sum;

    cin >> n;

    if (n == 1) {
        cout << "YES" << ed;
        return 0;
    }
    for (int i = 2; i <= n; ++i) {
        sum = (i * (i - 1)) / 2;

        if (sum == n) {
            cout << "YES" << ed;
            return 0;
        }
    }

    cout << "NO" << ed;

    return 0;
}