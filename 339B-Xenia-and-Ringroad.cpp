#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {

    int n, m, tmp;
    cin >> n >> m;

    vector<int> ta;
    for (int i = 0; i < m; i++) {
        cin >>tmp;
        ta.push_back(tmp);
    }
 
    int result = ta[0] - 1;
    for (int i = 1; i < m; i++) {
        if (ta[i - 1] > ta[i])
            result += ta[i] + (n - ta[i - 1]);
            
        else if (ta[i - 1] <= ta[i])
            result += ta[i] - ta[i - 1];
    }
 
    cout << result << ed;

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}

// *    author:  talha4t
//github.com/talha4t (Talha Mahmud)


