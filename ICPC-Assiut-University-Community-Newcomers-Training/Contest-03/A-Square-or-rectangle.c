#include <stdio.h>

int main()
{
    int h, w, n;

    scanf("%d", &n);

    while(n--)
    {
        scanf("%d %d", &h, &w);

        if (h == w)
            printf("Square\n");
        else 
            printf("Rectangle\n");
    }

    return 0;
}