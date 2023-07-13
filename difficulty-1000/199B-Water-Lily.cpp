#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    double h, l;
    cin >> h >> l;

    cout << fixed << setprecision(13) << ((l * l) - (h * h)) / (2 * h) << ed;

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}

// *    author:  talha4t
//github.com/talha4t (Talha Mahmud)


