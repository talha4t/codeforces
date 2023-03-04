#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define str string
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, t;

    cin >> t;

    while(t--) {
        cin >> a >> b;

        if (a == b) 
            cout << 0 << ed;
        else if (a > b) {
            if ((a-b) % 2 == 0) 
                cout << 1 << ed;
            else 
                cout << 2 << ed;
        }

        else {
            if ((b-a) % 2 == 0) 
                cout << 2 << ed;
            else 
                cout << 1 << ed;
        }
    }

    return 0;
}