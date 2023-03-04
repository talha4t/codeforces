#include <stdio.h>

int main() {
    int n, A, B, i, sum = 0;

    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &A, &B);

    for (i = A; i <= B; i++) {
        sum = sum + arr[i];
    }

    printf("%d\n", sum);

    return 0;
}