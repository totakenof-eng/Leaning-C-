#include <stdio.h>
int main ()
{
    float a, b, c;

    printf("Your 1st number: ");
    scanf("%f", &a);
    printf("Your 2nd number: ");
    scanf("%f", &b);
    printf("Your 3rd number: ");
    scanf("%f", &c);

    if(a >= b && a >= c)
    {
        printf("The largest number is = %.2f", a);
    }
    else if(b >= a && b >= c)
    {
        printf("The largest number is = %.2f",  b);
    }
    else
    {
        printf("The largest number is = %.2f", c);
    }

    return 0;
}