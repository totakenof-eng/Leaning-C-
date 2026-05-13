#include <stdio.h>
int main ()
{
    int N;

    printf("Your number: ");
    scanf("%f", &N);


    if( N>0)
    {
        printf("Your number is a positive number");
    }
    else
    {
        printf("Your number is a negative number");
    }
    
    return 0;
}