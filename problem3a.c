#include<stdio.h>
int main ()

{

int n, result;

printf("Your number: ");
scanf("%d", &n);

for(int i = 1; i <= 10; i++)
{
    result = n * i;

    if(result % 2 == 0)
    {
        printf("%d x %d = %d\n", i, n, result);
    }
    else
    {
        printf("%d x %d = odd\n", i, n);
    }
}

return 0;


}