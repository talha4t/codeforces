#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], temp;

    gets(s);
    int count, len, i, j;
    len = strlen(s);


    for (i = 0; i < len ; i++) {
        for (j = i + 1; j < len; j++) {
            if (s[i] > s[j]) {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for (i = 0; i < s[i] != 0; i++) {
        if (s[i] != s[i + 1]) {
            count++;
        }
    }
    
    if (count % 2 == 0) {
        printf("CHAT WITH HER\n");
    }
    else {
        printf("IGNORE HIM\n");
    }
   return 0;
}