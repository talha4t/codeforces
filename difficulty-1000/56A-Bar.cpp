#include <bits/stdc++.h>
 
using namespace std;
 
int n, ans = 0;
 
int main()
{
    string x;
 
    std::cin >> n;
 
    for (int i = 0; i < n; i++) {
 
        std::cin >> x;
 
        if(x=="ABSINTH"||x=="BEER"||x=="BRANDY"||x=="CHAMPAGNE"||x=="GIN"||x=="RUM"
			||x=="SAKE"||x=="TEQUILA"||x=="VODKA"||x=="WHISKEY"||x=="WINE")
            ans++;
        if (x.size() == 2 && x[0] == '1' && x[1] < '8')
            ans++;
        if (x.size() == 1 && x[0] >= '0' && x[0] <= '9')
            ans++;
    }
 
    std::cout << ans << "\n";
 
    return 0;
} 