#include <stdio.h>

int main() {
    char ch;

    scanf("%c", &ch);

    if (ch == 'z') {
        ch = 'a';
    }
    else {
      ch = ch + 1;
    }

    printf("%c\n", ch);

    return 0;
}