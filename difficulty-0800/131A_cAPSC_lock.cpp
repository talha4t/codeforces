#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    string s;
    int i;
    bool isStart = true;

    cin >> s;

    for (i = 0; i < s.length(); i++) {
        if (s[0] >= 'a' && s[0] <= 'z') {
            s[0] -= 32;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
        }
        else 
            cout << s << "\n";
        
    }
    
    cout << s << "\n";

    return 0;
}