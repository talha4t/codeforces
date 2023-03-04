#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define str string
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, k, mid;

    cin >> n >> k;

    if (n % 2 == 0) 
        mid = n / 2;
    else 
        mid = (n / 2) + 1;

    if (mid >= k) 
        cout << (2 * k ) - 1 << ed;
    else 
        cout << (k - mid) * 2 << ed;

    return 0; 
}

// solved 9:32 P.M.