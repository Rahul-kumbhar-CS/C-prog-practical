//Calculate salary after adding a given bonus percentage. 
#include<stdio.h>
int main()
{
    float salary, bonus, bonus_percentage, salary2;
    printf("Enter salary and bonus percentage of employee:");
    scanf("%f%f",&salary,&bonus_percentage);
    bonus=(bonus_percentage/100)*salary;
    salary2=salary+bonus;
    printf("Salary after adding bonus percentage=%.2f",salary2);
    return 0;
}