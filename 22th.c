// Print left angle triangle using #
#include<stdio.h>
int main()
{
    int i=1, j, n;
    printf("Enter the number of rows for the triangle:");
    scanf("%d",&n);
    printf("Left angle triangle of %d rows:\n", n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("@");
        }
        printf("\n");
    }
    return 0;
}