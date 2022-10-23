#include <stdio.h>

int main()
{
    int t, m, c, sum1 = 0, sum2 = 0;

    scanf("%d", &t);

    while(t--) {
        scanf("%d %d", &m, &c);

        if (m > c)
            sum1++;
        if (m < c) 
            sum2++;
    }

    if (sum1 > sum2)
        printf("Mishka");
    else if (sum1 < sum2) 
        printf("Chris");
    else 
        printf("Friendship is magic!^^");
    
    return 0;
}