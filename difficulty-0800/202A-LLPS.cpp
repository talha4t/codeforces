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
    
    sort(s.begin() , s.end()); 

    for (int i = s.length() - 1; i >= 0; i--) {
        cout << s[i];
        if (s[i] != s[i-1])
            break;
    }    

       
    return 0;
}