#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, temp;
    char s[100];

    scanf("%s", s);
    int len = strlen(s);


    for (i = 0; i < len; i++) {
       for (j = i + 1; i < len; j++) {
        if (s[j] < s[i])
        {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }
       }
    }

    for (i = 0; i < len; i++) {
        printf("%d ",s[i]);
    }

    return 0;
}