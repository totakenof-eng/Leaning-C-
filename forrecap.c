#include<stdio.h>
int main()
{
    for(int i = 1; i<=13; i++)
    {
        for(int j = 13; j>=i; j--)
        {
        
            printf("%d", j);

        }
        printf("\n");

    }

    return 0;
}