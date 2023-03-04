#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define str string
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;

    cin >> n >> m;

    int ct = 0;
    for (int i = 0; i < sqrt(1000); i++) {
        for (int j = 0; j < sqrt(1000); j++) {
            if (j*j + i == n && i*i + j == m) {
                ct++;
            }
        }
    }

    cout << ct << ed;
    return 0;
}