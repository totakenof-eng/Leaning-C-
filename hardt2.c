#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter value of a: ");
    scanf("%d", &a);


    printf("Enter value of b: ");
    scanf("%d", &b);


    printf("Before swap: a=%d b=%d\n", a, b);
    
    // this mathmetics line doesnot show in result so therefore these two gets mixed remember to use /n


    a = a + b;
    b = a - b;
    a = a - b;
     

    printf("After swap: a=%d b=%d", a, b);


    return 0;







}
