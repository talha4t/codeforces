#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, n, i, j, count;
    char temp;
    string s;

    std::cin >> t;

    while(t--)
    {
        count = 0;
        std::cin >> n;

        for (i = 0; i < n; i++) {
            std::cin >> s[i];
        }

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                if (s[i] < s[j]) {
                    temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
            }
        }
        
        for (i = 0; i < n; i++) {
            if (s[i - 1] != s[i]) {
                count = count + 2;
            }
            else 
                count++;
        }
        std::cout << count << "\n";
    }

    return 0;
}