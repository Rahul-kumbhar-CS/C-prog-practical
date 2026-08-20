// C program on addition of two numbers using function
#include<stdio.h>
int add(int a, int b)
{
    return a+b;
}
int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    add(a,b);
    printf("Addition=%d",add(a,b));
    return 0;
}