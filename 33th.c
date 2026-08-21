//Swap two numbers.
#include<stdio.h>
int main()
{
    int a=10,b=23;
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}