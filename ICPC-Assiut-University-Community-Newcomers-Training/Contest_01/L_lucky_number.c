#include <stdio.h>

int main()
{
    int n, n1, n2;

    scanf("%d", &n);

    n1 = n / 10;
    n2 = n % 10;


        if (n1 % n2 == 0 && n2 % n1 == 0)
        {
            printf("YES\n");
        }
        else 
        {
            printf("NO\n");
        }

    return 0;

}