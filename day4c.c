#include <stdio.h>
int main()
{
    float N;

    printf("Enter your number: ");
    scanf("%f", &N);
    
    for(int i = 1; i<=10; i++)
    {
        printf("%.2f x %d= %.2f\n", N, i, N*i);
    }

    return 0;

}