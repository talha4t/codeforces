#include <stdio.h>

int main()
{
    int x, i, count = 0, n = 5;

    scanf("%d", &x);
    
    for (i = 0; i < x; i++, n--) {
        if (x % n == 0) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}