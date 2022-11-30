#include <stdio.h>

int main()
{
    long long int a, b;

    scanf("%lld %lld", &a, &b);

    if (a - b >= 0)
        printf("%lld", a - b);
    else 
        printf("%d", 0);

    return 0;
}