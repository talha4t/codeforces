#include <stdio.h>
#include <string.h>

int main()
{
    char word[1000];
    int i, len, is_word_started = 0;

    gets(word);
    len = strlen(word);

    for (i = 0; i < len; i++) {
        if (word[i] >= 'a' && word[i] <= 'z') {
            if (is_word_started == 0)
            {
                word[i] = word[i] - 32;
                is_word_started = 1;
            }
        }

        else if (word[i] >= 'A' && word[i] <= 'Z') {
            if(is_word_started == 0) 
            {
                is_word_started = 1;
            }
        }
    }

    printf("%s\n", word);

    return 0;
}