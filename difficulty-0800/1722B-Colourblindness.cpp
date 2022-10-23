#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define str string
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, n;
    str s, s1;

    cin >> t;

    while(t--) {
        cin >> n;

        cin >> s >> s1;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'G') 
                s[i] = 'B';
            if (s1[i] == 'G')
                s1[i] = 'B';
        }
        if (s1 == s) 
            cout << "YES" << ed;
        else 
            cout << "NO" << ed;
    }

    return 0;
}