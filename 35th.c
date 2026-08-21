//Compare two numbers and print whether the first is greater, smaller, or equal.
#include<stdio.h>
int main()
{
    int n1, n2;
    printf("Enter two numbers:");
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
    {
        printf("n1 is greater");
    }
    else if(n1==n2)
    {
        printf("both are equal");
    }
    else
    {
        printf("n1 is smaller");
    }
    return 0;
}