//Check whether a number is divisible by 2, 3, both, or neither. 
#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num%2==0 && num%3==0)
    {
        printf("%d is divisible by both 2 and 3",num);
    }
    else if(num%2==0)
    {
        printf("%d is divisible by 2",num);
    }
    else if(num%3==0)
    {
        printf("%d is divisible by 3",num);
    }
    else
    {
        printf("%d is not divisible by either 2 or 3",num);
    }
    return 0;
}