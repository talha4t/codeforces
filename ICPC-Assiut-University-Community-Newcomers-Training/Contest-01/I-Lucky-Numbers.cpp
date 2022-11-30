#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

        int a = n % 10;
        int b = n / 10;

        if (a % b == 0)
            cout << "YES" << ed;
        else if (b % a == 0)
            cout << "YES" << ed;
        else 
            cout << "NO" << ed;
    return 0;
}

//github.com/talha4t (Talha Mahmud)
