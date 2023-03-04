#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define string str

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;

    cin >> n;

    if ((n%7==0)|| (n%4==0) || (n%47==0) || (n%74==0) || (n%77==0)|| (n%44==0)
        || (n%444==0) || (n%777==0) || (n%744==0) || (n%447==0) || (n%474==0) 
        || (n%477==0) || (n%774==0)) {
            cout << "YES" << ed;
        }
    else
        cout << "NO" << ed;

    return 0;
}