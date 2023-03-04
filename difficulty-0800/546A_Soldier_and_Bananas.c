#include <stdio.h>

int main()
{
    long long int n, k, w, sum = 0;

    scanf("%lld %lld %lld",  &k, &w, &n);

    for (int i = 1; i <= n; i++) {
        sum = sum + (i * k);
    }

    if (sum <= w) {
        printf("%d", 0);
    }
    else {
        printf("%d", sum - w);
    }

    return 0;
}