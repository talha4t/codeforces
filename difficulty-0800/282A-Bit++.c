#include <stdio.h>

int main()
{
    int n, i, count = 0;

    scanf("%d", &n);

    char str[5];

    while(n--) {

        scanf("%s\n", str);

        if (str[1] == '+') {
            count++;
        }
        else {
            count--;
        }
    }
    

    printf("%d", count);

    return 0;
}