#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i, j, r, c, n;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++) 
        {
            scanf("%d", &n);

            if (n == 1) {
                r = abs(i - 3);
                c = abs(j - 3);
                printf("%d", r + c);
                return 0;
            }
        }
    }
    return 0;
}