//Convert Dollars to Rupees using a given exchange rate. 
#include<stdio.h>
int main()
{
    float rupees, dollars, exchange_rate;
    printf("Enter the amount in dollars:");
    scanf("%f", &dollars);
    printf("Enter the exchange rate (1 dollar to rupees):");
    scanf("%f", &exchange_rate);
    rupees=dollars*exchange_rate;
    printf("Amount in rupees: %.2f", rupees);
    return 0;
}