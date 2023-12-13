#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    string x1, x2;
    int y1, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    while(x1[x1.size() - 1] == '0') {
        y1++;
        x1.pop_back();
    }
    while(x2[x2.size() - 1] == '0') {
        y2++;
        x2.pop_back();
    }

    if (x1 == x2) {
        if (y1 == y2) 
            cout << '=' << ed;
        else if (y1 > y2)
            cout << '>' << ed;
        else
            cout << '<' << ed;
    }
    else {
        int x = x1.size() + y1;
        int y = x2.size() + y2;

        if (x == y) {
            if (x1 > x2)
                cout << '>' << ed;
            else 
                cout << '<' << ed;
        }
        else if (x > y)
            cout << '>' << ed;
        else 
            cout << '<' << ed;
    }

    return true;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
