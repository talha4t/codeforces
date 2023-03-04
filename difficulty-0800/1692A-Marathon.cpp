#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, i, arr[4], count;

    cin >> t;

    while(t--)
    {
        count = 0;
        for (i = 0; i < 4; i++) {
            cin >> arr[i];
        }
        int max = arr[0];

        for (i = 0; i < 4; i++) {
            if (arr[i] > max) {
                count++;
            }
        }

        std::cout << count << "\n";
    }

    return 0;
}