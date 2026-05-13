#include <stdio.h>
int main()
{
    double a;

    printf("Enter your number: ");
    scanf("%lf", &a);


    for (float i = 1; i<=30; i++)
    {
        a = a + i;
    
    }

    printf("total= %.2lf", a);
    
    return 0;
}