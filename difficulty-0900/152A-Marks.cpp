#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define ll long long int 

bool solve() {
    
    int n, m;
    scanf("%d %d", &n, &m);
 
    int a[n + 1][m + 1];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%1d", &a[i][j]);
        } 
    }

    int mx = INT_MIN, tmp = 0;

    int v[m];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (mx < a[j][i]) {
                mx = a[j][i];
            }
        }
        v[i] = mx;
        mx = INT_MIN;
    }

    int res = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == v[j]) {
                res++;
                break;
            }
        }
    }

    printf("%d\n", res);

    return true;
}

int main() {

    solve();
    
    return 0;
}

/*
    author:  talha4t
    github.com/talha4t (Talha Mahmud)
    Wednesday, April 12, 2023 | 19:38:28 (UTC +06:00) Dhaka
*/