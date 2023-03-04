#include <stdio.h>
#include <string.h>

int main()
{

    int i, j;

    char str1[101], str2[102];

    scanf("%s", str1);
    scanf("%s", str2);

    int len1 = strlen(str1);
    char temp;

   for (i = 0; i < len1/2; i++)  
    {  
        temp = str1[i];  
        str1[i] = str1[len1 - i - 1];  
        str1[len1 - i - 1] = temp;  
    }  


     if (0 == strcmp(str1, str2)) {
        printf("YES\n");
     }
     else {
        printf("NO\n");
     }


    return 0;
} 