//Convert hours into days and remaining hours. 
#include<stdio.h>
int main()
{
    int hours, days, remaining_hours;
    printf("Enter the number of hours:");
    scanf("%d", &hours);
    days=hours/24;
    remaining_hours= hours%24;
    printf("%d hours is equal to %d days and %d remaining hours.",hours,days,remaining_hours);
    return 0;
}