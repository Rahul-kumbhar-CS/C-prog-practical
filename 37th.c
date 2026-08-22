//check whether a person's age is valid for voting.
#include<stdio.h>
int main()
{
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("Status:Valid for voting\n");
    }
    else
    {   
        printf("Status:Not valid for voting\n");
    }
    return 0;
}
