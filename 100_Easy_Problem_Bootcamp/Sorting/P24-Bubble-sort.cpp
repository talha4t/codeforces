#include <bits/stdc++.h>
using namespace std;

bool bubble_sort(int arr[], int n)
{
    int i, j, temp, cnt;

    for (i = 1; i < n; i++) {
        for (j = 0; j < n - 1; j++) {
            cnt++;
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            cout << arr[j] << " ";
        }
        cout << arr[n-1];
        cout << "\n";
    }

    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, i;

    cin >> n;

    int arr[n];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bubble_sort(arr, n);
    
}