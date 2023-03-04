#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, countA = 0, countD = 0;

    scanf("%d", &n);

    char str[n];

    scanf("%s", str);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == 'A')
        {
            countA++;
        }
        if (str[i] == 'D')
        {
            countD++;
        }
    }
    
    if (countA > countD) {
        printf("Anton");
    }
    else if (countD > countA) {
        printf("Danik");
    }
    else {
        printf("Friendship");
    }

    return 0;
}