//Calculate Simple Interest.
#include<stdio.h>
int main()
{
    float SimpleInterest, Principal, Rate, time;
    printf("enter the principal amount, rate of interest and time in years:");
    scanf("%f%f%f",&Principal,&Rate,&time);
    SimpleInterest=(Principal*Rate*time)/100;
    printf("Simple Interest is %.2f",SimpleInterest);
    return 0;
} 