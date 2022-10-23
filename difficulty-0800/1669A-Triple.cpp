#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, tt, i, count;

    cin >> t;

    while(t--)
    {
        count = 1;
        cin >> tt;

        int arr[tt];

        for (i = 0; i < tt; i++) {
            std::cin >> arr[i];
        }
        sort(arr, arr + tt);
        for (i = 0; i < tt; i++) {
            if (arr[i] == arr[i + 1]) {
                count++;
            }
        }

            // std::cout << count << "\n"; 
        for (i = 0; i < tt; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << "\n";
    }
    return 0;

}

