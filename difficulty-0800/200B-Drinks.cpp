#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define str string
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;

    cin >> n;

    double sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        sum = sum + x;
    } 

    printf("%.12lf",sum/n);

    return 0;
}