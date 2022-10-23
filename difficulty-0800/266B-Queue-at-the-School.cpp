#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, t;

    cin >> n >> t;

    string s;
    char temp;
    cin >> s;

    while(t--)
    {
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                temp = s[i + 1];
                s[i + 1] = s[i];
                s[i] = temp;
                i++;
            }

        }
    }

    cout << s;

    return 0;
}