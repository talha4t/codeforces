// from Sabnaj apu :)
 
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int i, cnt = 0;
 
    string s;
    string a = "hello";
 
    cin >> s;    
    
    int x = 0, y = 0;
    for (i = 0; i < s.size(); i++) {
         if (s[i] == a[x]) {
            y++;
            x++;
         }
    }
 
    if (y == 5) 
        cout << "YES";
    else 
        cout << "NO";
 
    return 0;
}