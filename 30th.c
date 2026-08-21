//Find the last digit of a number using %. 
#include<stdio.h>
int main()
{
    int number,last_digit;
    printf("Enter a number:");
    scanf("%d",&number);
    last_digit=number%10;
    printf("Last digit of a number is %d",last_digit);
    return 0;
}