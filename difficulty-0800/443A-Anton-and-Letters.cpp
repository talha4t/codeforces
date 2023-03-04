#include <bits/stdc++.h>
using namespace std;

#define ed '\n'

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    char s[1003];

    gets(s);

    int l = strlen(s);

    sort(s, s+l);

    int cnt = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            if (s[i] != s[i + 1]) {
                cnt++;
            }
        }
    }
    cout << cnt << ed;
    
    return 0;
}