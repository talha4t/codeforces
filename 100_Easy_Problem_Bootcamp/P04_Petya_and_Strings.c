#include <stdio.h>

int string_compare(char a[], char b[]);

int main() {
    char a[100], b[100];

    scanf("%s %s", a, b);
    
    int res = string_compare(a, b);

    printf("%d\n", res);

  return 0;
}

int string_compare(char a[], char b[]) 
{
     int i, j;     
     for(i = 0; a[i] != '\0' && b[i] != '\0'; i++) {  
        if(a[i] >= 'A' && a[i] <= 'Z') {
            a[i] += 32;
        }
        if (b[i] >= 'A' && b[i] <= 'Z') {
            b[i] += 32;
        }

         if(a[i] < b[i]) {     
             return -1;     
         }     
         if(a[i] > b[i]) {     
             return 1;     
         }     
     }     
    return 0;     

}