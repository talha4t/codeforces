#include <bits/stdc++.h>
using namespace std;

bool solve()
{
    int t;

    cin >> t;

    while(t--)
    {
        int n;

        cin >> n;

        int arr[n];

        int i, j, temp = 0;
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // for (i = 0; i < n; i++) {
        //     for (j = 1; j < n - i; j++) {
        //         if (a[j] > a[j+1]) {
        //             temp = a[j];
        //             a[j] = a[j+1];
        //             a[j+1] = temp;
        //         }
        //     }
        // }
        for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

        int cnt = 0;
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
        for (i = 0; i < n; i++) {
            if (arr[i] != arr[i+1]) {
                cnt++;
            }
        }

        cout << cnt << "\n";

    }

    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}