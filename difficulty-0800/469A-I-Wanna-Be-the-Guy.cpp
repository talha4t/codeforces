#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, s1, n;
    cin >> n;
    cin >> s;
    cin >> s1;
    
    if (s.length() > s1.length()) {

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == n[0]) {
                cout << "I become the guy." << "\n";
            }
        }
    }


    
    
    return 0;
}