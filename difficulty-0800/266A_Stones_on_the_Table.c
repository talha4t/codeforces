#include <stdio.h>

int main()
{
    int n, i, count = 0;
    char str[101];

    scanf("%d", &n);
    scanf(" %[^\n]", str);
    
    for (i = 0; i < n; i++) {
        if (str[i] == str[i + 1])
        {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}