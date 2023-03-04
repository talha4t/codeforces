#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i, cnt;

    cin >> n;

    cnt = 0;
    for (i = 0; i < n; i = i + 5) {
        cnt++;
    }

    cout << cnt;
    
    return 0;
}