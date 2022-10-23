#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    char str[102];

    cin >> str;
    
    int cnt = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'H' || str[i] == 'Q' || str[i] == '9') {
                cnt++;
            }
    }

    if (cnt > 0) 
        cout << "YES";
    else
        cout << "NO";
        
    return 0;
}