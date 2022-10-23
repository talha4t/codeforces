#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int t, i;
 
    std::cin >> t;
 
    while(t--) {
        long long n, sum = 0;
 
        cin >> n;
 
        sum = (n * (n + 1)) / 2;
        
        int a = 1;
        while(a <= n) {
            sum -= 2 * a;
            a = a * 2;
        }
        std::cout << sum << "\n";        
    }
 
    return 0;
}