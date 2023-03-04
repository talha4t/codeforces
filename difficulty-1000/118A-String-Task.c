#include <stdio.h>
#include <string.h>

int main()
{
    char str[102];

    int i, len;

    gets(str);
    
    len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'o' && str[i] != 'u' && str[i] != 'i' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'O' && str[i] != 'U' && str[i] != 'I' &&
            str[i] != 'y' && str[i] != 'Y') {
                if (str[i] >= 'A' && str[i] <= 'Z') {
                    str[i] += 32;
                }
                printf(".");
                printf("%c", str[i]);
            }
    }
    
    return 0;
}