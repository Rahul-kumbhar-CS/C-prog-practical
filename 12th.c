//total marks and percentage of five subjects. 

#include<stdio.h>
int main()
{
    int sub1, sub2,sub3,sub4,sub5,sum;
    float percentage;
    printf("Enter marks out of 100 of five subjects:\n");
    printf("Enter marks of five subjects:");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    sum=sub1+sub2+sub3+sub4+sub5;
    percentage=(sum/5.0);
    printf("total marks of five subjects is %d\n",sum);
    printf("Percentage of five subjects is %.2f",percentage);
}