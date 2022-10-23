#include <bits/stdc++.h>
using namespace std;

#define ed '\n'
#define string str

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, i;

    cin >> n;

    int arr[n];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }


    int cnt = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] != arr[i + 1]) {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}