#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    int t = n;
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (1.0 * 1 / t);

        t -= 1;
    }

    cout << fixed << setprecision(12) << sum << ed;
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
