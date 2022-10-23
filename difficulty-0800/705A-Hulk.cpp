#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define str string
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    cout << "I hate ";

    for (int i = 2; i <= n; i++) {
        if (i % 2 == 1)
           cout << "that I hate ";
        else
            cout << "that I love ";
    }

    cout << " it" << ed;

    return 0;
}