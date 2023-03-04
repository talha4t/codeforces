#include <stdio.h>
#include <string.h>

int main()
{
    int i, len, l = 0, u = 0;

    char str[102];

    gets(str);

    len = strlen(str);

    for (i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            l++;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z'){
            u++;
        }
    }

    if (u > l) {
        for (i = 0; i < len; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {

                str[i] -= 32;
            }
        }
    }
    else {
        for (i = 0; i < len; i++) {
            if (str[i] >= 'A' && str[i] <= 'Z') {

                str[i] += 32;
            }
        }
    }


        printf("%s", str);


    return 0;
}