#include <stdio.h>

int main() 
{
    int tt, i;
    long long int a, b, sum;

    scanf("%d", &tt);

    while(tt--) 
    {
        sum = 0;
        scanf("%lld %lld", &a, &b);

        for (i = a; i <= b; i++)
        {
            sum = sum + i;
        }

        printf("%lld\n", sum);
    }
}