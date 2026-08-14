#include<stdio.h>
int main()
{
    float celcius, fahrenheit;
    printf("Enter the temperature in celcius:");
    scanf("%d", &celcius);
    fahrenheit = (celcius * 9/5) + 32;
    printf("The temperature in fahrenheit is: %d", fahrenheit);
    return 0;
}