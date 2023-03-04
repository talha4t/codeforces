#include <stdio.h>

int main()
{
    int t, i, a = 0, b = 0;
    char str[7];

    scanf("%d", &t);

    while(t--)
    {
        scanf("%s", str);

        for (i = 0; i < 3; i++) {
            a = a + str[i];
        }
        for (i = 3; i < 6; i++) {
            b = b + str[i];
        }
        
        if (a == b) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
        a = 0;
        b = 0;
    }

    return 0;
}