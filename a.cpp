#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (ar[i] >= 0 && ar[i] < min)
            min = ar[i];
    }

    // cout << min;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == min)
        {
            cout << min;
            break;
        }
        else if (ar[i] < 0 && abs(ar[i]) < min)
        {
            cout << abs(ar[i]);
            break;
        }

        else
        {
            cout << 0;
            break;
        }
    }
}