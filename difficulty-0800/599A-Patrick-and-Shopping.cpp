#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define str string
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a, b, c;

    cin >> a >> b >> c;
    
    if (a+b <= c)
        cout << 2 * (a+b);
    else if (b + c <= a)
        cout << 2 * (b + c);
    else if (a + c <= b)
        cout << 2 * (a + c);
    else 
        cout << a + b + c;
        
    return 0;
}