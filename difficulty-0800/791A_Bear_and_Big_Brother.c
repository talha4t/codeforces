#include <stdio.h>

int main()
{
    int a, b, i, count = 0;

    scanf("%d %d", &a, &b);

            
    if (a > b) {
        count = 0;
    }
    else {
        while (a <= b) 
        {
            a = a * 3;
            b = b * 2;
            count++;
        }
    }

    printf("%d\n", count);
    
    return 0;
}