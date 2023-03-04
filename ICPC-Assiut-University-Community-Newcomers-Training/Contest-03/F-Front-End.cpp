#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) 
        cin >> a[i];

        if (n % 2 != 0) { 
            for (int i = 0, j = n - 1; i <= n / 2 ; i++, j--) {
                if (i == j)
                    cout << a[j] << ' ';
                else {
                    cout << a[i] << ' ';
                    cout << a[j] << ' ';
                }
            }
        }

        else {
            for (int i = 0, j = n - 1; i < n / 2; i++, j--) {
                    cout << a[i] << ' ';
                    cout << a[j] << ' ';
            }
        }


    return 0;
}

//github.com/talha4t (Talha Mahmud)
