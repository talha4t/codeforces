#include <stdio.h>

int main()
{
    int t, i, n, min, ans = 0, sum = 0;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        int arr[n];
        for (i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        min = arr[0];
        for (i = 0; i < n; i++) {
            if (arr[i] < min) {
                min = arr[i];
            }

            sum = sum + arr[i];
        }

        ans = (sum - min * (n));

        printf("%d\n", ans);
        sum = 0, ans = 0;
    }
    return 0;
}