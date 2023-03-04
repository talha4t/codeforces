#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define string str

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, i, sum = 0;

    cin >> n;

    int arr[n];

    for (i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr+n);

    int ct = 1, sum1 = 0;
    for (i = n - 1; i >= 0; i--) {
        sum1 += arr[i];

        if (sum1 > sum-sum1) {
            break;
        }
        ct++;
    }
    
    cout << ct << ed;
    return 0;
}
