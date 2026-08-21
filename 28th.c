//Convert days into weeks and remaining days.
#include<stdio.h>
int main()
{
    int days;
    int weeks, remaining_days;
    printf("Enter number of days:");
    scanf("%d",&days);
    weeks=days/7;
    remaining_days=days%7;
    printf("Weeks=%d and remaining days=%d",weeks,remaining_days);
} 