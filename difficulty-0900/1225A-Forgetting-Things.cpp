#include <bits/stdc++.h>
using namespace std;

#define ll long long int 

bool solve() {
    
    int a, b; cin >> a >> b;

    if (a == b)
        cout << a << 1 << ' ' << b << 2 << '\n';
    else if (a + 1 == b)
        cout << a << 9 << ' ' << b << 0 << '\n';  
    else if (a == 9 and b == 1)
        cout << 9 << ' ' << 10 << '\n';
    else 
        cout << -1 << '\n';

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Friday, June 23, 2023 | 20:43:57 (UTC +06:00) Dhaka
*/