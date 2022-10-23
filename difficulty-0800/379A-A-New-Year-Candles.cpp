#include <bits/stdc++.h>
using namespace std;

bool solve()
{
    int a, b;

    cin >> a >> b;

    int ct = 0, cnt = 0;
    while(a--)
    {
        cnt++;
        if (cnt == b) {
            a++;
            cnt = 0;
        }
        ct++;
    }

    cout << ct << "\n";

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}