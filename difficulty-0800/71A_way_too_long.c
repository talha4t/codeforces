#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, len;
    char word[100];

    scanf("%d", &n);

    while(n--) {
        scanf("%s", word);
        len = strlen(word);

        for (i = 0; i < len; i++) {
            if (len <= 10) {
                printf("%s\n", word);
                break;
            }
            else {
                printf("%c%d%c\n", word[0], len - 2, word[len - 1]);
                break;
            }
        }
    }

    return 0;
}