#include<stdio.h>
int main()
{
    int k, s=0;
    printf("Enter your number: ");
    scanf("%d", &k);

    for(int i = 1; i<=k; i++)
    {
        s = s + i;
    }

    printf("Total sum is = %d\n", s);

    if( s % 2 == 0)
    {
        printf("The sum is even");
    }
    else
    {
        printf("The sum is odd");
    }

    return 0;

}