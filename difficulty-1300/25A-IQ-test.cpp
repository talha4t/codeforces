#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    int a[n];
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int e_ct = 0, o_ct = 0, o_index = 0, e_index = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] % 2 == 0) {
            e_ct++;
            e_index = i;
        }
        else {
            o_ct++;
            o_index = i;
        }
    }   

    if (e_ct < o_ct)
        cout << e_index << ed;
    else
        cout << o_index << ed;

    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
