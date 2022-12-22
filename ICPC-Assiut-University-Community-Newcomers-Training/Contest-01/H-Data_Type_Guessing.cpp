#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    double n, k, a;
    cin >> n >> k >> a;

    ll hold = (n * k) / a;
    double res = (n * k) / a;

    if (res - hold > 0)
        cout << "double";
    else if (hold <= 2147483647) 
        cout << "int";
    else if (res > 2147483647)
        cout << "long long";
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
