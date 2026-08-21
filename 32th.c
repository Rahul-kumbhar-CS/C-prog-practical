//Calculate the final price of a product after a given discount percentage. 
#include<stdio.h>
int main()
{
    float price, discount_percentage,final_price,discount_amount;
    printf("Enter price and discount percentage:");
    scanf("%f%f",&price,&discount_percentage);
    discount_amount=price*(discount_percentage/100);
    final_price=price-discount_amount;
    printf("The final price of a product after a given discount percentage is %f",final_price);
    return 0;
}