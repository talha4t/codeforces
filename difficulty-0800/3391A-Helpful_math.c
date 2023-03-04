#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, len, temp;
    char str[102];

    gets(str);

    len = strlen(str);

    
    for (i = 0; i < len; i++) {
        if (str[i] != '+') {
            for (j = 0; j < len; j++) {
                if (str[i] < str[j]) {
                    temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }
            }
        }
    }

    for (i = 0; i < len; i++) {
        printf("%c", str[i]);
    }
    return 0;
}