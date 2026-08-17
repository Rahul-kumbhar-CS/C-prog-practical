//Calculate Compound Interest. 
#include<stdio.h>
#include<math.h>
int main()
{
    int CompoundInterest, rate, time, principal;
    double amount;
    printf("Enter the principal amount, rate and time:");
    scanf("%d %d %d",&principal, &rate, &time);
    amount= principal* pow((1 + rate / 100.0), time);
    printf("The total amount is: %lf\n", amount);
    CompoundInterest = amount - principal;
    printf("The compound interest is: %d", CompoundInterest);
    return 0;
}