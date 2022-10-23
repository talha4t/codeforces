#include <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, i, t;

    cin >> t;

    while(t--) 
    {

        cin >> n >> k;

        for (i = 1; i <= k; i++) {
            if (n % i != 0) {
                cout << i;
            }
        }
       
    }

    return 0;
}