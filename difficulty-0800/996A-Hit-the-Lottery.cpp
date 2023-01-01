#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    ll sum = 0; 

    sum += n / 100;
    n %= 100;
    sum += n / 20;
    n %= 20;
    sum += n / 10;
    n %= 10;
    sum += n / 5;
    n %= 5;

    sum += n;

    cout << sum << ed;
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
