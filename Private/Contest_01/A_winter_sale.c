#include <stdio.h>

int main()
{
    double x, p, real_price;

    scanf("%lf %lf", &x, &p);

    real_price = (p * 100) / (100 - x);

    printf("%.2lf\n", real_price);

    return 0;
}