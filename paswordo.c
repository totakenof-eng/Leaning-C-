#include <stdio.h>
int main ()
{
    int a;
    printf("Enter your password: ");
    scanf("%d", &a);
    do
    {
        if(a !=12345678)
        {
            printf("wrong password, try again: ");
            scanf("%d", &a);

        }
    }
    while(a !=1234);
    printf("Correct password, welcome!");
    return 0;
}          