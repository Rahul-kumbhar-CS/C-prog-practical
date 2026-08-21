//Convert minutes into hours and remaining minutes.
#include<stdio.h>
int main()
{
    int minutes, hours, remaining_minutes;
    printf("Enter minutes:");
    scanf("%d",&minutes);
    hours=minutes/60;
    remaining_minutes=minutes%60;
    printf("converted hours=%d and remaining minutes=%d",hours,remaining_minutes);
    return 0;
}
