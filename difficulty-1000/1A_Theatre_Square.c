#include <stdio.h>

int main() {
    int n, m, a;
    long long int  x, y, sum;
    scanf("%d %d %d", &n, &m, &a);
    x = n / a;
    y = m / a;
    if (n % a != 0) {
        x = x + 1;
    }
    if (m % a != 0) {
        y = y + 1;
    }
    sum = x * y;
    printf("%lld\n", sum);

    return 0;
}