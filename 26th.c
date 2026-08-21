//Calculate BMI using weight and height.
#include<stdio.h>
int main()
{
    int height;
    float BMI;
    float meter,weight,height2;
    printf("Enter the weight in KG and height in foot:");
    scanf("%f%d",&weight,&height);
    meter=height*0.3048;
    height2=meter*meter;
    BMI= weight/height2;
    printf("height in m:%f\n",meter);
    printf("The BMI is %.2f\n",BMI);
    return 0;
}