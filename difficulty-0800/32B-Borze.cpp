#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define str string
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    str s;

    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '.') 
            cout << 0;
        if (s[i] == '-' && s[i+1] == '.') {
            cout << 1;
            i++;
        }
        if (s[i] == '-' && s[i+1] == '-') {
            cout << 2;
            i++;
        }
    }

    return 0;
}