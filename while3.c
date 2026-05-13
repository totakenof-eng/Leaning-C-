#include <stdio.h>
int main ()
{
    int a;
    
    printf("Your number is: ");
    scanf("%d", &a);

    int i = 0;
    while(i<=a)
    {
        printf("%d\n", i);
        i=i+2;
    }
    return 0;
}