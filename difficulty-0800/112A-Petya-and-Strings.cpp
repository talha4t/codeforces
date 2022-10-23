#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define str string
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    str s1;
    str s2;

    cin >> s1 >> s2;

    for (int i = 0; i < s1.length(); i++) {
        s1[i] = toupper(s1[i]);
        s2[i] = toupper(s2[i]);
    }

    if (s1 < s2) 
        cout << -1 << ed;
    else if (s1 > s2) 
        cout << 1 << ed;
    else
        cout << 0 << ed;
     
    return 0;
}