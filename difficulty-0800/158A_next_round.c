#include <stdio.h>

int main()
{
    int sum, n, i, pos, count = 0;

    scanf("%d %d", &n, &pos);
    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d ", &a[i]);
       
    }

    for (i = 0; i < n; i++) {
         sum = a[pos - 1];

        if (a[i] >= sum && a[i] != 0) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}