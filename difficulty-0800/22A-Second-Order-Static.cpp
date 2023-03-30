#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    set<int> s;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        s.insert(x);
    }

    if (s.size() == 1) 
        cout << "NO" << ed;
    else
        cout << *(++s.begin()) << ed;


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


