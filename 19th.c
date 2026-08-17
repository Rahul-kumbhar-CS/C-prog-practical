//WAP to print day of the week using switch case
#include<stdio.h>
int main()
{
    int day;
    printf("Enter a number (1-7) to get corresponding day of the week:");
    scanf("%d",&day);
    switch(day)
    {
    case 1:
        printf("monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
    printf("Thursday");
        break;
    case 5:
        printf("friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Invalid input! Please enter a number between 1 and 7.");
    }
    return 0;
}