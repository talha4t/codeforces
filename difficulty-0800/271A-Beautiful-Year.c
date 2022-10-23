#include <stdio.h>

int main()
{
    int year, a, b, c, d;
    
    scanf("%d", &year);

    while(year >= 0) {
        year++;

        a = year / 1000;
        b = year / 100 % 10;
        c = year / 10  % 10;
        d = year % 10;

        if (a != b && b != c && c != d && a != c && a != d && b != d) {
            printf("%d", year);
            return 0;
        }
        
    }

}