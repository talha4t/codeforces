#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int k; cin >> k;

        int ct = 0, c = 0;
        for (int i = 1; i <= 10000; i++) {
            string s = to_string(i);
            if (i % 3 != 0 and s[s.length() - 1] != '3')  {
                c = i;
                ct++;
            }

            if (ct == k)
                break;
        }

        cout << c << ed;
    }
    
    return 0;
}

//github.com/talha4t (Talha Mahmud)
