#include <stdio.h>

void solve(int t)
{
    int x;

    while(t--)
    {
        scanf("%d", &x);

        if (x >= 1900)
            printf("Division 1\n");
        else if (x >= 1600 && x <= 1899)
            printf("Division 2\n");
        else if (x >= 1400 && x <= 1599)
            printf("Division 3\n");
        else if (x <= 1399) 
            printf("Division 4\n");
    }

}
int main()
{
    int t;

    scanf("%d", &t);
    
    solve(t);

    return 0;
}