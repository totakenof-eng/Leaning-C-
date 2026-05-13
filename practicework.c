#include<stdio.h>
int main()
{
    int a;

    printf("Enter your number: ");

    scanf("%d", a);

    printf("Outer block");
    
    for(int i=1; i<=a; i++)
    {
        printf("Before code");

        printf("%d\n", i);
        printf("After print");
        
    }
    return 0;
}