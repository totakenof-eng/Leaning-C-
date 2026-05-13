#include <stdio.h>
int main ()
{
    double a, b, c, s;

    printf("1st number: ");
    scanf("%lf", &a);
    
    printf("2nd number: ");
    scanf("%lf", &b);

    printf("3rd number: ");
    scanf("%lf", &c);
    

    // calculation

    s = a + b + c;


    printf("Total =%.3lf", s);


    return 0;







}