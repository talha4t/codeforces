#include <stdio.h>

int main()
{
    int n, p, v, t, res = 0;

    scanf("%d", &n);

    while(n--) {
        scanf("%d %d %d", &p, &v, &t);

        if ((p + v + t) >= 2) {
            res++;
        }
    }
        printf("%d\n", res);

    return 0;
}