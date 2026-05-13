#include <stdio.h>
int main()
{
    float N;


    printf("Your marks: ");
    scanf("%f", &N);

    if(N>=90)
    {
        printf("Your grade is A+");
    }
    else if(N>=80)
    {
        printf("Your grade is A");
    }
    else if(N>=70)
    {
        printf("Your grade is B");
    }
    else if(N>=60)
    {
        printf("Your grade is C");
    }
    else if(N>=50)
    {
        printf("Your grade is D");
    }
    else
    {
        printf("Your grade is F");
    }

    return 0;

}




    
    


