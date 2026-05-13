#include <stdio.h>
int main()
{
    int N;

    printf("Your Number: ");
    scanf("%d", &N);

    if( N % 2 == 0 )
    {
        printf("This is a even number");
    }
    else
    {
        printf("This is a odd number");
    }

    return 0;

}