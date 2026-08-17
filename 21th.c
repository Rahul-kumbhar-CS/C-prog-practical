// Check whether the given number is prime or not
#include<stdio.h>
int main()
{
    int  i;
    printf("Enter a number: ");
    for(i=2;i<=40;i++)
    {
        int num;
        scanf("%d", &num);
        if( num%i==0 )
        {
            printf("%d is nota prime number\n", num);
            break;
        }
        else
        {
            printf("%d is a prime number\n", num);
            break;
        }
    }
    return 0;
}