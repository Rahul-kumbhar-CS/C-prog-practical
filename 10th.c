//Find the remainder when one number is divided by another. 
#include<stdio.h>
int main()
{
    int a, b, remainder;
    printf("Eneter the value of a and b:");
    scanf("%d %d",&a, &b);
    remainder = a%b;
    printf("Reminder when %d is divided by %d is %d", a, b, remainder);
    return 0;
}