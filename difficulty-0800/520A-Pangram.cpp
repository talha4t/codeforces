#include <bits/stdc++.h>
using namespace std;

#define ed '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, i;

    cin >> n;

    char s[n];

    for (i = 0; i < n; i++) {
        cin >> s[i];
    }

    for (i = 0; i < n; i++) {
        if(s[i]<='Z'&&s[i]>='A')
        {
            s[i]='a'+s[i]-'A';
        }
    }
    sort(s, s+n);

    int ct = 0;
    for (i = 0; i < n; i++) {
        if (s[i] >= 'a' && s[i] <= 'z' ||
            s[i] >= 'A' && s[i] <= 'Z') {
                if (s[i] != s[i + 1]) {
                    ct++;
                }
            }
            
    }

    
     if (ct == 26) {
        cout << "YES" << ed;
    }
    else 
        cout << "NO" << ed;
    return 0;
}