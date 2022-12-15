#include <bits/stdc++.h>
using namespace std;

int a[250];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int p;
    cin >> p;

    for (int i = 0; i < p; i++)
        cin >> a[i];

    int q;
    cin >> q;

    for (int i = p; i < p + q; i++)
        cin >> a[i];
    
    sort(a, a + (p + q));

    int ct = 0;
    for (int i = 0; i < (p + q); i++) {
        if (a[i] != a[i + 1])
            ct++;
    }

    if (ct == n)
        cout << "I become the guy.";
    else 
        cout << "Oh, my keyboard!";


    return 0;
}