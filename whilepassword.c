#include <stdio.h>
int main ()
{
    int a;

    printf("Enter your password: ");
    scanf("%d", &a);
    while(a !=1234)
    {
        printf("Wrong password, try again: ");
        scanf("%d", &a);
    }
    printf("Correct password, welcome!");

    return 0;
}