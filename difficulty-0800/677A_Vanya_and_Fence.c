#include <stdio.h>

int main()
{
    int n, h, i, len, count = 0;

    scanf("%d %d", &n, &h);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    len = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < len; i++) {
        if (arr[i] > h) {
            count = count + 2;  
        } 
        if (arr[i] <= h) {
            count++;
        }
    }    

    printf("%d", count);

    return 0;

}