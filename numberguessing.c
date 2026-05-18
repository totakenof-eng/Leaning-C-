#include <stdio.h>
int main ()
{
    int a;
    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 to 100. Can you guess it?\n");
    printf("Enter your guessed number: ");
    scanf("%d", &a);

    while(a != 61)
    {
        printf("Wrong guess, try again: ");
        scanf("%d", &a);
    }
    printf("Good job! You guessed it correctly!!");
    
    return 0;
    
}