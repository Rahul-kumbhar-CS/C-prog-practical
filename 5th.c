#include<stdio.h>
int main()
{
    int a, b, c, avg;
    printf("enter the value of a, b and c:");
    scanf("%d %d %d", &a, &b, &c);
    avg=(a+b+c)/3;
    printf("average of a,b and c is %d",avg);
}