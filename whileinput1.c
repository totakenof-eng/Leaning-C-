#include <stdio.h>
int main ()
{
    int a, s=0;
    printf("Your number (0 to stop):");
    scanf("%d", &a);

    while(a != 0)
    {
        s = a + s;
        printf("Your current sum is: %d\n", s);
        printf("Your number (0 to stop):");
        scanf("%d", &a);
    }

    printf("Your final sum is: %d", s);


    return 0;
}