#include <stdio.h>

int main()
{
    int n, i, is = 0;

    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] == 1 && is == 0) {
            printf("HARD\n");
            is = 1;
        }
        else {
            printf("EASY\n");
            continue;
        }
    }


    return 0;
}