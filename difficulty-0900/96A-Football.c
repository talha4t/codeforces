#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, x = 0, y = 0, z = 0;
    char str[102];

    scanf("%s", str);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] = '1') {
            x++;
            y = 0;
        }
        else 
            y++;
            x = 0;
        if (x == 7 || y == 7) {
            z = 1;
        }
    }

     if (z = 1)
         printf("YES");
     else
         printf("NO");

    return 0;
}