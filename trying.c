#include<stdio.h>
int main(){
    char a[10000];
    printf("What is your name: ");
    scanf("%s", a);

    printf("Your name is %s", a);
    
    return 0;
}