#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n; cin >> n;

    int ct = 0, temp = 0;

    int x = 0, y = 0;
    while(n--) {
        char ch;
        cin >> ch;

        if ('U' == ch)
            y++;
        else if ('D' == ch)
            y--;
        else if ('L' == ch)
            x--;
        else
            x++;

        ct++;
        if (x == 0 and y == 0)
            break;

    }

    cout << ct << ed;

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


