#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a + b - c == d)
        cout << "YES" << ed;
    else if (a - b + c == d)
        cout << "YES" << ed;
    else if (a * b + c == d)
        cout << "YES" << ed;
    else if (a + b * c == d)
        cout << "YES" << ed;
    else if (a - b * c == d)
        cout << "YES" << ed;
    else if (a * b - c == d)
        cout << "YES" << ed;
    else 
        cout << "NO" << ed;

    return 0;
}

//github.com/talha4t (Talha Mahmud)
