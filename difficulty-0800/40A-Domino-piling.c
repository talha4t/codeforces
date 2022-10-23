#include <stdio.h>

int main()
{
    int i, m, n, count = 0;

    scanf("%d %d", &m, &n);

    for (i = 1; i < m * n; i = i + 2) {
        count++;
    }

    printf("%d", count);

    return 0;
}