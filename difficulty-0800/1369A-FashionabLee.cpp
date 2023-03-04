#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define str string
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int t, n;

    cin >> t;

    while(t--) {
        cin >> n;

        if (n % 4 == 0) 
            cout << "YES" << ed;
        else 
            cout << "NO" << ed;
    }
    return 0;
}