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

    if (n % 2 == 1)
        cout << -1 << ed;
    else {
        for (int i = n; i >= 1; i--) {
            cout << i << " ";
        }
    }

    return 0;
}   