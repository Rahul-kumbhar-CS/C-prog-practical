//Calculate the area and perimeter of a rectangle. 
#include<stdio.h>
int main()
{
    float length, width, area, perimeter;
    printf("Enter the length and width of rectangle:");
    scanf("%f%f", &length, &width);
    area = length * width;
    perimeter = 2 * (length + width);
    printf("Area of rectangle is %.2f\n", area);
    printf("Perimeter of rectangle is %.2f", perimeter);
    return 0;
}
