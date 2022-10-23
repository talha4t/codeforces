#include <stdio.h>

int main()
{
    int n, i, temp;

    scanf("%d", &n);

    int arr[n];

    for (i = 1; i <= n; i++) {
        scanf("%d", &temp);
        
        arr[temp] = i;
    }

    for (i = 1; i <= n; i++)
        printf("%d ", arr[i]);

    return 0;


}